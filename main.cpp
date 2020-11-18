#include <iostream>

#include "exprtk.hpp"

void parseTest() {
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double>     expression_t;
    typedef exprtk::parser<double>             parser_t;

    const std::string expr_string = "2 * x + 5";

    double x;

    symbol_table_t symbol_table;
    symbol_table.add_variable("x",x);
    symbol_table.add_constants();

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser;
    parser.compile(expr_string,expression);

    for (x = double(-5); x <= double(+5); x += 0.001)
    {
        const double y = expression.value();
        printf("%19.15f\t%19.15f\n", x, y);
    }
}

int main() {
    parseTest();
    return 0;
}
