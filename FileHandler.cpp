#include "FileHandler.h"

FileHandl::FileHandl(const std::string& fileName)
{
	ofile.open(fileName + "_date.txt");
	std::cout << "\nStart c\n";
}

std::string FileHandl::writeline(const std::string& line)
{
		ofile <<line << "\n";
	
	return line;
}

std::shared_ptr<FileHandl> FileHandl::createFileHandler(const std::string& filename)
{
	auto file = std::shared_ptr<FileHandl>(new FileHandl(filename), [](FileHandl* del) {
		std::cout << "FileHandler çàêðûò è ôàéë çàêðûò\n";
		delete del;
		});
	return file;
}


void FileHandl::writeToFile(std::shared_ptr<FileHandl>& handler, const std::string& data)
{
	handler->writeline(data);

}
