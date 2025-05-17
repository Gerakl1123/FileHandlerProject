#pragma once
#include<string>
#include<fstream>
#include<iostream>

struct FileHandl
{
	std::ofstream ofile;

	FileHandl(const std::string& fileName);
	
	std::string writeline(const std::string& line);
	static std::shared_ptr<FileHandl> createFileHandler(const std::string& filename);
	void writeToFile(std::shared_ptr<FileHandl> handler, const std::string& data);

	~FileHandl()
	{
		if (ofile.is_open())
		{
			ofile.close();

			std::cout << "\nClose decs\n";
		}
		else
			std::cerr << "Error! File is not open.\n";
	}

};
