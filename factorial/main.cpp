//
//  main.cpp
//  factorial
//
//  Created by samuel muloki on 12/05/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned int num;
    unsigned long long factorial = 1;
    cout <<"Enter a postive integer: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout <<"factorial of "<<num<<" = "<<factorial;
    cout <<endl<<endl;
    return 0;
}
