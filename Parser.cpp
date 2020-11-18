//
// Created by Simon on 18.11.2020.
//

#include "Parser.h"

Function Parser::parse(const char *string) {
    fParser = FunctionParser();
    fParser.Parse(string, "x");
    return Function(fParser);
}
