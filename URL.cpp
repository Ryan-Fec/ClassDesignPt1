#include "URL.h"
#include <iostream>
#include <ostream>

URL::URL(const std::string full_url):
	scheme{ full_url.substr(0, full_url.find("/")) }, auth{ full_url.substr(scheme.size(), full_url.substr(scheme.size() + 2, full_url.size()).find("/") + 2) }, path{ full_url.substr(scheme.size() + auth.size(), full_url.size()) } {}
std::string URL::GetFullUrl() const{
	return scheme + auth + path;
}
std::string URL::GetScheme() const{
	return scheme;
}
std::string URL::GetAuth() const{
	return auth;
}
std::string URL::GetPath() const{
	return path;
}

std::ostream& operator<<(std::ostream& out, const URL& URL)
{
	out << "URL: " << URL.GetFullUrl() << "\n    SCHEME: " << URL.GetScheme() << "\n    AUTHORITY: " << URL.GetAuth() << "\n    PATH: " << URL.GetPath() << "\n";
	return out;
}