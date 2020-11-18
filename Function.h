//
// Created by Simon on 18.11.2020.
//
#include "fparser4.5.2/fparser.hh"

#ifndef SCHNEIDERAPP_FUNCTION_H
#define SCHNEIDERAPP_FUNCTION_H


class Function {
public:
    Function(FunctionParser fp);
    double operator()(double x);
private:
    FunctionParser fParser;
};


#endif //SCHNEIDERAPP_FUNCTION_H
