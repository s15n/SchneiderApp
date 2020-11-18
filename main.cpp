#include <iostream>

#include "Parser.h"

int main() {
    Parser parser = Parser();
    Function f = parser.parse("x^2");
    std::cout << f(1) << " --- " << f[1] << std::endl;
    return 0;
}
