#include "TextFileManager.h"
#include <sstream>


TextFileManager::TextFileManager()
{
	src = TextSource();
}


TextFileManager::~TextFileManager()
{
}

TextSource TextFileManager::open(std::string file)
{
	std::string line;
	std::string text = "";
	src.setSrc(file); // Set the source's file

	iFile = std::ifstream(file);
	if (iFile.is_open()) {
		while (std::getline(iFile, line)) {
			text.append(line + '\n');
		}
		iFile.close();
	}
	src.setContent(text);

	return src;
}

TextSource TextFileManager::write(std::string file, std::string text)
{
	std::string line;
	src.setSrc("file");
	std::istringstream iss(text);

	// Build text
	oFile = std::ofstream(file);
	if (oFile.is_open()) {
		while (std::getline(iss, line)) {
			oFile << line << '\n';
		}
		oFile.close();
	}
	src.setContent(text);

	return src;
}
