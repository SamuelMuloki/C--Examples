//
//  main.cpp
//  functionTemplates
//
//  Created by Samuel Muloki on 01/05/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>
#include "maximum.h"

int main(int argc, const char * argv[]) {
    // demonstrate maximum with int values
    std::cout << "Input three integer values: ";
    int int1, int2, int3;
    std::cin >> int1 >> int2 >> int3;

    // Invoke int version of maximum
    std::cout << "The maximum integer value is: " << maximum(int1, int2, int3);

    // demonstrate maximum with double values
    std::cout << "\n\nInput three double values: ";
    double double1, double2, double3;
    std::cin >> double1 >> double2 >> double3;

    // Invoke double version of maximum
    std::cout << "The maximum double value is: " << maximum(double1, double2, double3);

    // demonstrate maximum with char values
    std::cout << "\n\nInput three characters: ";
    char char1, char2, char3;
    std::cin >> char1 >> char2 >> char3;

    // Invoke char version of maximum
    std::cout << "The maximum character value is: " << maximum(char1, char2, char3) << std::endl;
}
