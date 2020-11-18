//
// Created by Simon on 18.11.2020.
//

#include "Function.h"
#include <cmath>

Function::Function(FunctionParser fp) {
    fParser = fp;
}

double Function::operator()(double x) {
    return fParser.Eval(&x);
}

double Function::derivative(double x) {
    double xpd = x+DELTA;
    return ((fParser.Eval(&xpd) - fParser.Eval(&x)) / DELTA);
}

double Function::newton(double x0) {
    double xn = x0;
    while (abs(fParser.Eval(&xn)) > EPSILON) {
        xn -= fParser.Eval(&xn)/derivative(xn);
    }
    return xn;
}
