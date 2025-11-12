#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <fstream>

#define RESET "\033[0m"
#define RED "\033[31m"

class File
{
private:
	std::string fileName;
	std::string s1;
	std::string s2;
	std::string fileContent;

public:
	File(const std::string &filename, const std::string &s1, const std::string &s2);
	void setFileName(const std::string &newFileName);
	void setS1(const std::string &newS1);
	void setS2(const std::string &newS2);
	void setFileContent(const std::string &newFileContent);
	const std::string &getFileName() const;
	const std::string &getS1() const;
	const std::string &getS2() const;
	const std::string &getFileContent() const;
};

void replaceS1WithS2(File &obj);
void setNewFileName(File &obj);
bool createNewFile(File &obj);
bool openFilename(File &obj);

#endif