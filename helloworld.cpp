#include <iostream>
#include "functions.h"

void printHelloWorld(const std::string& language) {
    if (language == "English") {
        std::cout << "Hello, World!" << std::endl;
    } else if (language == "Finnish") {
        std::cout << "Hei, maailma!" << std::endl;
    }
}
