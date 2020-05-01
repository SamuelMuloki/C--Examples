//
//  main.cpp
//  SimpleClass
//
//  Created by Samuel Muloki on 25/04/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>
#include "Gradebook.h"

int main(int argc, const char * argv[]) {
    char sample[] = "Geeks for geeks";
    Gradebook myGradeBook;
    myGradeBook.displayMessage();
    std::cout << sample << " - A computer science portal for geeks" <<std::endl;
    /* The C++ cerr is the standard error stream which is used to output the errors.*/
    std::cerr << "An error occured" <<std::endl; // unbuffered standard error stream (cerr)
    /*This is also an instance of iostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled. */
    std::clog << "An error occured" <<std::endl; // buffered standard error stream (cerr)
    return 0;
}
