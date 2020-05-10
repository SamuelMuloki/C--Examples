//
//  main.cpp
//  Vectors
//
//  Created by Samuel Muloki on 10/05/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <vector>

void outputVector(const std::vector<int>&);
void inputVector(std::vector<int>&);

int main(int argc, const char * argv[]) {
    std::vector<int> integers1(7);
    std::vector<int> integers2(10);

    // Print integers1 size and contents
    std::cout << "Size of vector integers1 is " << integers1.size() << "\nvector after initialization:";
    outputVector(integers1);

    // Print integers2 size and contents
    std::cout << "Size of vector integers2 is " << integers2.size() << "\nvector after initialization: ";
    outputVector(integers2);

    // input and print integers1 and integers2
    std::cout << "Enter 17 integers: " << std::endl;
    inputVector(integers1);
    inputVector(integers2);

    std::cout << "\nAfter input the vectors contain:\n" << "integers1: ";
    outputVector(integers1);
    std::cout << "integers2: ";
    outputVector(integers2);

    // use inequality (!=) operator with vector objects
    std::cout << "\nEvaluating integers1 != integers2" << std::endl;
    if (integers1 != integers2) {
        std::cout << "integers1 and integers2 are not equal" << std::endl;
    }

    // create vector integers3 using integers1 as an initializer: print size and contents
    std::vector<int> integers3{integers1}; // copy instructor

    std::cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization: ";
    outputVector(integers3);

    // use overload assignment (=) operator
    std::cout << "\nAssigning integers2 to integers1:" << std::endl;
    integers1 = integers2;

    std::cout << "integers1: ";
    outputVector(integers1);
    std::cout << "integers2: ";
    outputVector(integers2);

    // use inequality (!=) operator with vector objects
    std::cout << "\nEvaluating integers1 == integers2" << std::endl;

    if (integers1 == integers2) {
        std::cout << "integers1 and integers2 are equal" << std::endl;
    }

    // use square brackers to use the value at location 5 as an rvalue
    std::cout << "integers1[5] is " << integers1[5] << std::endl;
    integers1[5] = 1000;
    std::cout << "integers1: ";
    outputVector(integers1);

    // attempt out-of-range subscript
    try {
        std::cout << "\nAttempt to display integers.at(15)" << std::endl;
        std::cout << integers1.at(15) << std::endl; // ERROR: out of range
    } catch (std::out_of_range& ex) {
        std::cerr << "An exception occurred: " << ex.what() << std::endl;
    }

    // changing the size of a vector
    std::cout << "\nCurrent integers3 size is: " << integers3.size() << std::endl;
    integers3.push_back(1000); // add 1000 to the end of the vector
    std::cout << "New integers3 size is: " << integers3.size() << std::endl;
    std::cout << "integers3 now contains: ";
    outputVector(integers3);
    return 0;
}

// output vector contents
void outputVector(const std::vector<int>& items) {
    for (int item : items) {
        std::cout << item << " ";
    }

    std::cout << std::endl;
}

void inputVector(std::vector<int>& items) {
    for (int& item : items) {
        std::cin >> item;
    }
}
