#include <iostream>
#include "log.hpp"

int main() {
    Logger outputs = Logger("output", "./");
    outputs.clear();
    outputs.log("Teste");
    outputs.error("Teste");
    std::cout << "logger was created!" << std::endl;
    return 0;
}