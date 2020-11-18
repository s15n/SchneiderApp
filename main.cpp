#include <iostream>

#include "fparser4.5.2/fparser.hh"

int main() {
    FunctionParser fp;
    fp.Parse("x+y", "x,y");
    double variables[2] = { 1.5, 2.9 };
    double result = fp.Eval(variables);
    std::cout << result << std::endl;
    return 0;
}
