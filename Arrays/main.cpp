//
//  main.cpp
//  Arrays
//
//  Created by Samuel Muloki on 03/05/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <array>

void RangeBasedForStatement();

int main(int argc, const char * argv[]) {
    // const variable can be used to delcare array size
    const std::size_t arraySize{5}; // must initialize in declaration
    std::array<int, arraySize> n{89, 378, 3, 45, 78}; // list initializer
//    static std::array<int, arraySize> n{89, 378, 3, 45, 78}; // static local array
    int total{0};

    std::cout << "Element" << std::setw(10) << "value" << std::endl;

    // Output each array element's value
    for (size_t i{0}; i < n.size(); i++) {
        total += n[i];
        std::cout << std::setw(7) << i << std::setw(10) << n[i] << std::endl;
    }
    std::cout << "The sum of all the elements in the array is " << total << std::endl;
    RangeBasedForStatement();
    return 0;
}

// this function demonstrates a range-based for statement
void RangeBasedForStatement() {
    std::array<int, 5> items{1, 2, 3, 4, 5};

    // display items before modification
    std::cout << "Items before modification: ";
    for (int item : items) {
        std::cout << item << " ";
    }

    // Multiply the elements of items by 2
    for (int& itemRef : items) {
        itemRef *= 2;
    }

    // display items after modification
    std::cout << "\nItems after modification: ";
    for (int item : items) {
        std::cout << item << " ";
    }

    std::cout << std::endl;
}
