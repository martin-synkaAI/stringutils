#include "stringutils.h"
#include <iostream>

int main() {
    std::cout << "StringUtils v1.0.0 — Analysis Team Product" << std::endl;
    std::cout << "to_upper('hello')    = " << stringutils::to_upper("hello") << std::endl;
    std::cout << "trim('  hi  ')       = '" << stringutils::trim("  hi  ") << "'" << std::endl;
    std::cout << "reverse('hello')     = " << stringutils::reverse("hello") << std::endl;
    std::cout << "starts_with('abc','a') = " << (stringutils::starts_with("abc","a") ? "true" : "false") << std::endl;
    std::cout << "count_char('hello','l') = " << stringutils::count_char("hello",'l') << std::endl;
    return 0;
}