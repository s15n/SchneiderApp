//
// Created by Simon on 18.11.2020.
//
#include "fparser4.5.2/fparser.hh"

#define DELTA 0.001
#define EPSILON 0.00001

#ifndef SCHNEIDERAPP_FUNCTION_H
#define SCHNEIDERAPP_FUNCTION_H


class Function {
public:
    explicit Function(FunctionParser fp);
    double operator()(double x);
    double Value(double x);
    double Derivative(double x);
    double Newton(double x0);
private:
    FunctionParser fParser;
};


#endif //SCHNEIDERAPP_FUNCTION_H
