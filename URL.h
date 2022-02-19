#pragma once
#include <iostream>
#include <string>
#include <ostream>

class URL {
public:
	URL(const std::string full_url);
	std::string GetFullUrl() const;
	std::string GetScheme() const;
	std::string GetAuth() const;
	std::string GetPath() const;
private:
	const std::string scheme;
	const std::string auth;
	const std::string path;
};

std::ostream& operator<<(std::ostream& out, const URL& URL);