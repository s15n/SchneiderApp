//
// Created by Simon on 18.11.2020.
//

#include "Function.h"
#include <cmath>

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
    double xn = x0;
    while (abs(Value(xn)) > EPSILON) {
        xn -= fParser.Eval(&xn)/Derivative(xn);
    }
    return xn;
}
