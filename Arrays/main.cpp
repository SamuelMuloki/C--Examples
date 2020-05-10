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

const std::size_t rows{2};
const std::size_t columns{3};
void rangeBasedForStatement();
void printArray(const std::array<std::array<int, columns>, rows>&);

int main(int argc, const char * argv[]) {
    std::array<std::array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    std::array<std::array<int, columns>, rows> array2{1, 2, 3, 4, 5};

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
    rangeBasedForStatement();

    std::cout << "Values in array1 by row are: "<< std::endl;
    printArray(array1);

    std::cout << "\nValues in array2 by row are: "<< std::endl;
    printArray(array2);
    return 0;
}

// this function demonstrates a range-based for statement
void rangeBasedForStatement() {
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

// multidimensional Arrays
// Output array with two rows and three columns
void printArray(const std::array<std::array<int, columns>, rows>& a) {
    // loop through the array rows
    for (auto const& row : a) {
        // loop through the elements of the current row
        for (auto const& element : row) { // auto tells the compiler to infer (determine) a variables data type based on the variables initializer value
            std::cout << element << " ";
        }
        std::cout << std::endl; // start a new line output
    }
}
