#include <iostream>
#include <string>

int main() {
    std::string hi_reference("hi mostafa!");
    std::string *hi = &hi_reference;
    std::cout << *hi << std::endl;
    std::cout << "address pointer: " << hi << std::endl;

    std::cout << hi_reference << std::endl;
    std::cout << "address reference: " << &hi_reference << std::endl;
    return 0;
}
