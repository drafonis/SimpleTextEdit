#pragma once
#include <fstream>
#include <string>
#include "TextSource.h"

class TextFileManager
{
public:
	TextFileManager();
	~TextFileManager();

private:
	std::ofstream oFile; // output file
	std::ifstream iFile; // input file
	TextSource src;

public:
	TextSource open(std::string);
	TextSource write(std::string, std::string);
};

