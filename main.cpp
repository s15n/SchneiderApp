#include <iostream>

#include "Parser.h"

int main() {
    Parser parser = Parser();
    Function f = parser.parse("sin(x)");
    std::cout << f(1) << " --- " << f.Newton(5) << std::endl;
    return 0;
}
