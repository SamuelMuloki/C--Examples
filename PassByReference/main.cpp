//
//  main.cpp
//  PassByReference
//
//  Created by Samuel Muloki on 01/05/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>

int squareByValue(int); // function prototype (value pass)
int squareByReference(int&); // function prototype (reference pass)

int main(int argc, const char * argv[]) {
    int x{2}; // value to square using squareByValue
    int z{4}; // value to square using squareByReference
    // demonstrate squareByValue
    std::cout << "x = " << x << " before squareByValue\n";
    std::cout << "Value returned by sqaureByValue: " << squareByValue(x) << std::endl;
    std::cout << "x = " << x << " after squareByValue\n" << std::endl;

    // demonstrate squareByReference
    std::cout << "x = " << z << " before squareByReference\n";
    std::cout << "Value returned by sqaureByValue: " << squareByReference(z) << std::endl;
    std::cout << "x = " << z << " after squareByReference" << std::endl;
    return 0;
}

// squareByValue multiples number by itself, stores the
// result in number and returns the new value of number
int squareByValue(int number) {
    return number *= number; // caller's argument not modified
}

// squareByValue multiples numberRef by itself, stores the
// result in the variable to which numberRef refers in function main
int squareByReference(int& numberRef) {
    return numberRef *= numberRef; // caller's argument modified
}

/* References as aliases within a function
 int count{1}; // declare integer variable count
 int& cRef{count}; // create cRef as an alias for count
 ++cRef; // increment count (using its alias cRef)
 */
