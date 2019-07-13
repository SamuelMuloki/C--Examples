//
//  main.cpp
//  swap
//
//  Created by samuel muloki on 12/05/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int num1, num2, num3;
    cout <<"Enter first number: ";
    cin >> num1;
    cout <<"Enter second number: ";
    cin >> num2;
    num3 = num1 + num2;
    num1 = num3;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout <<"After swaping num1: "<<num1<<" num2: "<<num2;
    cout <<endl<<endl;
    return 0;
}
