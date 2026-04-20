#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <string>

namespace stringutils {

std::string to_upper(const std::string& s);
std::string to_lower(const std::string& s);
std::string trim(const std::string& s);
bool starts_with(const std::string& s, const std::string& prefix);
bool ends_with(const std::string& s, const std::string& suffix);
std::string reverse(const std::string& s);
int count_char(const std::string& s, char c);

} // namespace stringutils

#endif