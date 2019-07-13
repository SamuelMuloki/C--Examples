//
//  main.cpp
//  evenOdd
//
//  Created by samuel muloki on 12/05/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number;
    cout <<"Enter any number: ";
    cin >> number;
    (number & 1) ? cout <<"Odd number: "<< number : cout<<"Even number: " << number;
    cout <<endl<<endl;
    return 0;
}
