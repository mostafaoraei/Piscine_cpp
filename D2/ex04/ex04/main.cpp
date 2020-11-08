#include <iostream>
#include "Fixed.h"
#include <string>
//#include <istream>
//#include <ostream>
#include <sstream>

Fixed eval_parantesis(std::string values[5]) {
    int i = 0;
    if (values[i] == "(") {
        Fixed tmp_fix;
        float a = std::stof(values[i + 1]);
        std::string op = values[i + 2];
        float b = std::stof(values[i + 3]);

        if (op == "+") {
            tmp_fix = Fixed(a) + Fixed(b);
        } else if (op == "*") {
            tmp_fix = Fixed(a) * Fixed(b);
        } else {
            tmp_fix = Fixed(a) - Fixed(b);
        }
        return tmp_fix;
    }
}


void eval_expr(std::string expr) {
    std::string tmp_string;
    int counter = 0;
    std::istringstream ss(expr);

    while (ss >> tmp_string) {
        ++counter;
    }

    std::string values[counter];
    counter = 0;
    std::istringstream sss(expr);
    while (sss >> tmp_string) {
        values[counter++] = tmp_string;
    }

    Fixed total_fix;
    for(int i = 0; i < counter; ++i) {
        if (values[i] == "(") {
            std::string v[5];
            for (int j = 0; j < 5; j++) {
                v[j] = values[i+j];
            }
            i+=4;
            total_fix = eval_parantesis(v);

        } else if (values[i] == "+") {
            if (values[i+1] == "(") {
                i++;
                std::string v[5];
                for (int j = 0; j < 5; j++) {
                    v[j] = values[i+j];
                }
                i+=4;
                Fixed temp(eval_parantesis(v));
                total_fix = total_fix + temp;
            }else {
                total_fix = total_fix + Fixed(std::stof(values[++i]));
            }
        } else if (values[i]  == "*") {
            if (values[i+1] == "("){
                i++;
                std::string v[5];
                for (int j = 0; j < 5; j++) {
                    v[j] = values[i+j];
                }
                i+=4;
                Fixed temp(eval_parantesis(v));
                total_fix = total_fix * temp;
            }else {
                total_fix = total_fix * Fixed(std::stof(values[++i]));
            }
        } else if (values[i] == "-"){
            if (values[i+1] == "(") {
                i++;
                std::string v[5];
                for (int j = 0; j < 5; j++) {
                    v[j] = values[i+j];
                }
                i+=4;
                Fixed temp(eval_parantesis(v));
                total_fix = total_fix - temp;
            }else {
                total_fix = total_fix - Fixed(std::stof(values[++i]));
            }
        } else {
            total_fix = Fixed( std::stof(values[i]));
        }
        std::cout << total_fix << std::endl;
    }

}

int main(int argc, char* argv[]) {
//    "( 18.18 + 3.03 ) * 2"
    eval_expr(argv[1]);
    return 0;
}
