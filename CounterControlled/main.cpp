//
//  main.cpp
//  CounterControlled
//
//  Created by samuel muloki on 06/06/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    int total{0};
    unsigned int gradeCounter{1};
    
    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;
    
    while (grade != -1) {
        total += grade;
        gradeCounter++;
        
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    
    if (gradeCounter != 0) {
        // static_cast<type> is explicit conversion
        // gradeCounter from into to double is implicit conversion (promotion)
        double average{static_cast<double>(total) / gradeCounter};
        cout << "\nTotal of the " << gradeCounter << " grades entered is " << total;
        // set precision is a parametized stream manipulator because it requires an argument Header <iomanip> must be included to use it
        // fixed is a non parametized stream manipulator. It indicates that floating point values should be output in fixed point format as opposed to scientific notation
        cout << setprecision(2) << fixed;
        cout << "\nClass average is " << average << endl;
    } else {
        cout << "No grades were entered" << endl;
    }
}
