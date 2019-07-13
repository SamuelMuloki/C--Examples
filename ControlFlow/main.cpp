//
//  main.cpp
//  ControlFlow
//
//  Created by samuel muloki on 06/06/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>
#include "student.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Student student1{"Jane Green", 93};
    Student student2{"John Blue", 72};
    
    cout << student1.getName() << "'s letter grade equivalent of " << student1.getAverage() << " is: " << student1.getLetterGrade() << "\n";
    cout << student2.getName() << "'s letter grade equivalent of " << student2.getAverage() << " is: " << student2.getLetterGrade() << endl;
}
