#include <iostream>

#include "Parser.h"

int main() {
    Parser parser = Parser();

    std::cout << "Type in a function: " << std::endl;

    std::string string = "0";
    std::cin >> string;

    Function f = parser.parse(string.c_str());

    std::cout << "Enter a start value: " << std::endl;

    double x0 = 0;
    std::cin >> x0;

    double zp = f.Newton(x0);

    std::cout << "A zero point of this function is at: " << zp << std::endl;

    return 0;
}
