#pragma once
#include <iostream>
#include <string>

class MetaPhoto {
public:
	MetaPhoto(std::string fileName, std::string imgType, std::string date, double fileSize, std::string authName, int imgWidth, int imgHeight, std::string apSize, std::string expTime, int isoVal, bool flashEn);
	void printPhotoMetadata(MetaPhoto Metadata);
	std::string getFileName();
	std::string getImgType();
	std::string getDate();
	double getFileSize();
	std::string getAuthName();
	std::string getImgShape();
	std::string getApSize();
	std::string getExpTime();
	int getIsoVal();
	bool getFlashEn();
	void setFileName(std::string fileName);
	void setImgType(std::string imgType);
	void setDate(std::string date);
	void setFileSize(double fileSize);
	void setAuthName(std::string authName);
	void setImgShape(int imgWidth, int imgHeight);
	void setApSize(std::string apSize);
	void setExpTime(std::string expTime);
	void setIsoVal(int isoVal);
	void setFlashEn(bool FlashEn);
private:
	std::string _fileName;
	std::string _imgType;
	std::string _date;
	double _fileSize;
	std::string _authName;
	std::string _imgShape;
	std::string _apSize;
	std::string _expTime;
	int _isoVal;
	bool _flashEn;
};