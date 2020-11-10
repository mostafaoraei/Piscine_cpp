#include <iostream>
#include "Fixed.h"
#include <string>
//#include <istream>
//#include <ostream>
#include <sstream>

int counter(std::string const & expr) {
    int counter(1);
    for (char st : expr) {
        if (st == ' ')
            counter++;
    }
    return counter++;
}

std::string * apart_exp(std::string const & expr, int const & count) {
    int n(count);

    std::string *expr_values = new std::string[n];
    std::istringstream ss(expr);
    std::string tmp_string;

    while (ss >> tmp_string) {
        expr_values[count - n] = tmp_string;
        n--;
    }
    return expr_values;
}

Fixed calc_parantesis(std::string const * expr_values, int & i) {
    int j = i+1;
    Fixed tmp_Fixed(std::stof(expr_values[j]));
    j++;
    while (expr_values[j] != ")") {
        if (expr_values[j] == "+") {
            tmp_Fixed = tmp_Fixed + Fixed(std::stof(expr_values[j+1]));
        } else if (expr_values[j] == "*") {
            tmp_Fixed = tmp_Fixed * Fixed(std::stof(expr_values[j+1]));
        } else if (expr_values[j] == "-") {
            tmp_Fixed = tmp_Fixed - Fixed(std::stof(expr_values[j+1]));
        }
        j++;
    }
    i = j;
    return tmp_Fixed;
}

void eval_expr(std::string expr) {

    int count = counter(expr);

    std::string * expr_values = apart_exp(expr, count);

    int n(count);
    Fixed total;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            if (expr_values[i] == "(") {
                total = calc_parantesis(expr_values, i);
                i++;
            } else if (expr_values[i] != "(") {
                total = Fixed(std::stof(expr_values[i]));
                i++;
            }
        }

        if (expr_values[i] == "+") {
            i++;
            if (expr_values[i] == "(") {
                total = total + calc_parantesis(expr_values, i);
            } else {
                total = total + Fixed(std::stof(expr_values[i]));
            }
        } else if (expr_values[i] == "*") {
            i++;
            if (expr_values[i] == "(") {
                total = total * calc_parantesis(expr_values, i);
            } else {
                total = total * Fixed(std::stof(expr_values[i]));
            }
        } else if (expr_values[i] == "-") {
            i++;
            if (expr_values[i] == "(") {
                total = total - calc_parantesis(expr_values, i);
            } else {
                total = total - Fixed(std::stof(expr_values[i]));
            }
        }
    }
    delete [] expr_values;

    std::cout << total << std::endl;
}

int main(int argc, char* argv[]) {
//    "2 * ( 18.18 + 3.03 ) * 2"
    eval_expr(argv[1]);

    return 0;
}
