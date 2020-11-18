//
// Created by Simon on 18.11.2020.
//

#include "fparser4.5.2/fparser.hh"
#include "Function.h"

#ifndef SCHNEIDERAPP_PARSER_H
#define SCHNEIDERAPP_PARSER_H

class Parser {
public:
    Function parse(const char* string);
private:
    char* string;
    FunctionParser fParser;
};


#endif //SCHNEIDERAPP_PARSER_H
