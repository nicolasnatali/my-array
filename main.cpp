#include "MyArray.h"

#include <iostream>

int main() {
    MyArray existingObj{20};
    std::cout << "existingObj:" << std::endl;
    std::cout << existingObj << std::endl;

    MyArray newobj{existingObj};
    std::cout << "newobj:" << std::endl;
    std::cout << newobj << std::endl;
    return 0;
}
