//
//  main.cpp
//  GradeBook
//
//  Created by Samuel Muloki on 03/05/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip> // parametized stream manipulators
#include "GradeBook.h"

int main(int argc, const char * argv[]) {
    // array of students
    const std::array<int, GradeBook::students> grades{87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    std::string courseName{"CS101 Introduction to C++ programming"};
    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
    return 0;
}
