#include "File.hpp"

void replaceS1WithS2(File &obj)
{
	std::string fileContent = obj.getFileContent();
	std::string s1 = obj.getS1();
	std::string s2 = obj.getS2();
	std::string newContent;
	std::string extracted;
	size_t extractionLength;
	size_t pos;
	size_t start;

	pos = 0;
	start = 0;
	while ((pos = fileContent.find(s1, start)) != std::string::npos)
	{
		extractionLength = pos - start;
		extracted = fileContent.substr(start, extractionLength);
		newContent = newContent + extracted + s2;
		start = pos + s1.length();
	}
	extracted = fileContent.substr(start, fileContent.length());
	newContent = newContent + extracted;
	obj.setFileContent(newContent);
	return;
}

void setNewFileName(File &obj)
{
    size_t i = 0;
    std::string NewFileName;
    const std::string &OriginalFileName = obj.getFileName();
    size_t len = (OriginalFileName.length());

    size_t lastDot = -1;
    i = len - 1;
    while (i >= 0)
    {
        if (OriginalFileName[i] == '.')
        {
            lastDot = i;
            break;
        }
        i--;
    }
    if (lastDot <= 0)
        obj.setFileName(OriginalFileName + ".replace");
    else
    {
        size_t j = 0;
        while (j < lastDot)
        {
            NewFileName += OriginalFileName[j];
            j++;
        }
        obj.setFileName(NewFileName + ".replace");
    }
    return;
}

bool createNewFile(File &obj)
{
	if ((obj.getFileContent().find(obj.getS1(), 0)) == std::string::npos)
	{
		std::cout << RED << "Error: non-existing [s1] in designated file." << RESET << std::endl;
		return false;
	}
	std::ofstream newFile(obj.getFileName().c_str());
	replaceS1WithS2(obj);
	if (!newFile.is_open())
		return (false);
	else
	{
		newFile << obj.getFileContent();
		newFile.close();
	}
	return (true);
}

bool openFilename(File &obj)
{
	std::ifstream file(obj.getFileName().c_str());
	std::string allContent;
	std::string line;

	if (!file.is_open())
		return (false);
	else
	{
		while (std::getline(file, line))
			allContent = allContent + line;
		obj.setFileContent(allContent);
	}
	return (true);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << RED << "Error: arguments must be [exec] [filename] [s1] [s2]." << RESET << std::endl;
		return (1);
	}
	File obj(argv[1], argv[2], argv[3]);
	if (obj.getS1().empty())
	{
		std::cerr << RED << "Error: s1 must not be empty." << RESET << std::endl;
		return 1;
	}
	if (!openFilename(obj))
	{
		std::cerr << RED << "Error: must be an existing file." << RESET << std::endl;
		return (1);
	}
	setNewFileName(obj);
	createNewFile(obj);
	return (0);
}