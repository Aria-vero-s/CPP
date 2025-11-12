#include "File.hpp"

File::File(const std::string &filename, const std::string &s1, const std::string &s2)
{
	setFileName(filename);
	setS1(s1);
	setS2(s2);
}
void File::setFileName(const std::string &newFileName)
{
	fileName = newFileName;
}
void File::setS1(const std::string &newS1)
{
	s1 = newS1;
}
void File::setS2(const std::string &newS2)
{
	s2 = newS2;
}
void File::setFileContent(const std::string &newFileContent)
{
	fileContent = newFileContent;
}
const std::string &File::getFileName() const
{
	return (fileName);
}
const std::string &File::getS1() const
{
	return (s1);
}
const std::string &File::getS2() const
{
	return (s2);
}
const std::string &File::getFileContent() const
{
	return (fileContent);
}