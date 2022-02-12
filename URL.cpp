#include "URL.h"
#include <iostream>

URL::URL(std::string full_url):
	scheme{ full_url.substr(0, full_url.find("/")) }, auth{ full_url.substr(scheme.size(), full_url.substr(scheme.size() + 2, full_url.size()).find("/") + 2) }, path{ full_url.substr(scheme.size() + auth.size(), full_url.size()) } {}
std::string URL::GetFullUrl() {
	return scheme + auth + path;
}
std::string URL::GetScheme() {
	return scheme;
}
std::string URL::GetAuth() {
	return auth;
}
std::string URL::GetPath() {
	return path;
}