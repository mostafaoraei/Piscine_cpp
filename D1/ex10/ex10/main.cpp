#include <fstream>
#include <iostream>
#include "Cat.h"

bool file_exist(const char * file) {
    std::ifstream infile(file);
    return infile.good();
}

int main(int argc, char* argv[]) {
    Cat cat;
    bool readingMode = true;
    if ((argc > 3)&&( *argv[argc-2] == '>' )) {
        readingMode = false;
    }

    int numberToCheck = (readingMode) ? argc : argc - 2;

    for (int i = 1; i < numberToCheck; ++i) {
        if (!file_exist(argv[i])) exit(111);
        cat.ReadFile(argv[i]);
    }
    (readingMode) ? cat.printInConsole() : cat.WriteFile(argv[numberToCheck + 1]);

    return 0;
}
