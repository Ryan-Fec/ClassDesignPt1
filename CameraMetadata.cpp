#include  "CameraMetadata.h"
#include <iostream>
#include <string>
MetaPhoto::MetaPhoto(std::string fileName, std::string imgType, std::string date, double fileSize, std::string authName, int imgWidth, int imgHeight, std::string apSize, std::string expTime, int isoVal, bool flashEn) :
	_fileName{ fileName }, _imgType{ imgType }, _date{ date }, _fileSize{ fileSize }, _authName{ authName }, _imgShape{ std::to_string(imgWidth) + std::string(" x ") + std::to_string(imgHeight) }, _apSize{ apSize }, _expTime{ expTime }, _isoVal{isoVal}, _flashEn{flashEn} {}
std::string MetaPhoto::getFileName() {
	return _fileName;
}
std::string MetaPhoto::getImgType() {
	return _imgType;
}
std::string MetaPhoto::getDate() {
	return _date;
}
double MetaPhoto::getFileSize() {
	return _fileSize;
}
std::string MetaPhoto::getAuthName() {
	return _authName;
}
std::string MetaPhoto::getImgShape() {
	return _imgShape;
}
std::string MetaPhoto::getApSize() {
	return _apSize;
}
std::string MetaPhoto::getExpTime() {
	return _expTime;
}
int MetaPhoto::getIsoVal() {
	return _isoVal;
}
bool MetaPhoto::getFlashEn() {
	return _flashEn;
}
void MetaPhoto::setFileName(std::string fileName) {
	_fileName = fileName;
}
void MetaPhoto::setImgType(std::string imgType) {
	if (imgType == std::string("PNG") || imgType == std::string("GIF") || imgType == std::string("JPEG")) {
		_imgType = imgType;
	}
	else {
		std::cout << "Invalid img type.";
	}
}
void MetaPhoto::setDate(std::string date) {
	_date = date;
}
void MetaPhoto::setFileSize(double fileSize) {
	_fileSize = fileSize;
}
void MetaPhoto::setImgShape(int imgWidth, int imgHeight) {
	_imgShape = std::to_string(imgWidth) + std::string(" x ") + std::to_string(imgHeight);
}
void MetaPhoto::setApSize(std::string apSize) {
	_apSize = apSize;
}
void MetaPhoto::setExpTime(std::string expTime) {
	_expTime = expTime;
}
void MetaPhoto::setIsoVal(int isoVal) {
	_isoVal = isoVal;
}
void MetaPhoto::setFlashEn(bool flashEn) {
	_flashEn = flashEn;
}
void printPhotoMetadata(MetaPhoto metadata) {
	std::cout << "File Name: " << metadata.getFileName() << ", Type: " << metadata.getImgType() << ", Date taken: " << metadata.getDate() << ", File Size in MB: " << metadata.getFileSize() << 
		", Img Size: " << metadata.getImgShape() << ", Aperture size: " << metadata.getApSize() << ", Exposure Time : " << metadata.getExpTime() << ", ISO value: " <<
		metadata.getIsoVal() << ", Is Flash Enabled? " << metadata.getFlashEn() << "\n";
}