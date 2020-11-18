//
// Created by Simon on 18.11.2020.
//

#include "Function.h"

Function::Function(FunctionParser fp) {
    fParser = fp;
}

double Function::operator()(double x) {
    return fParser.Eval(&x);
}

double Function::operator[](double x) {
    double xpd = x+DELTA;
    return ((fParser.Eval(&xpd) - fParser.Eval(&x)) / DELTA);
}
