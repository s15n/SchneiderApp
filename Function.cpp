//
// Created by Simon on 18.11.2020.
//

#include "Function.h"
#include <cmath>
#include <iostream>

Function::Function(FunctionParser fp) {
    fParser = fp;
}

double Function::operator()(double x) {
    return Value(x);
}

inline double Function::Value(double x) {
    return fParser.Eval(&x);
}

double Function::Derivative(double x) {
    double xpd = x+DELTA;
    return ((Value(xpd) - Value(x)) / DELTA);
}

double Function::Newton(double x0) {
    std::cout << "Calculating zero points..." << std::endl;

    int n = 0;
    double xn = x0;
    while (abs(Value(xn)) > EPSILON) {
        double fx = Value(xn);
        double fdx = Derivative(xn);

        std::cout << "    n: " << n << " ; xn: " << xn << " ; f(x): " << fx << " ; f'(x): " << fdx << std::endl;

        xn -= fx / fdx;
        n++;
    }

    std::cout << "error: " << abs(Value(xn)) << std::endl;

    return xn;
}
