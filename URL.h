#pragma once
#include <iostream>
#include <string>

class URL {
public:
	URL(std::string full_url);
	std::string GetFullUrl();
	std::string GetScheme();
	std::string GetAuth();
	std::string GetPath();
private:
	std::string scheme;
	std::string auth;
	std::string path;
};