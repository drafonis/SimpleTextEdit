#include "TextSource.h"



TextSource::TextSource()
{
	strSource.assign("");
}


TextSource::~TextSource()
{

}

std::string TextSource::getSrc()
{
	// Return source if it has content
	if (!strSource.empty()) {
		return strSource;
	} else {
		return "";
	}
}

bool TextSource::setSrc(std::string str)
{
	// Set source to str if str is not empty
	if (str.empty()) {
		return false;
	} 
	strSource.assign(str);
	return true;
}

std::string TextSource::getContent()
{
	// Return null if there is no content
	if (strContent.empty()) {
		return "";
	} 
	return strContent;
}

bool TextSource::setContent(std::string content) 
{
	strContent.assign(content);
	return strContent.empty();
}

bool TextSource::hasContent()
{
	return bHasContent;
}

void TextSource::setHasContent()
{
	bHasContent = !bHasContent;
}

bool TextSource::isModified()
{
	return bIsModified;
}

void TextSource::setModified()
{
	bIsModified = !bIsModified;
}
