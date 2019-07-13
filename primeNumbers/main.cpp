//
//  main.cpp
//  primeNumbers
//
//  Created by samuel muloki on 12/05/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int i, num;
    cout <<"Enter any number: ";
    cin >> num;
    if (num == 1) {
        cout <<"Smallest prime number is 2";
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            cout <<num<<" is not a prime number";
            break;
        }
    }
    if (num == i) {
        cout <<num<<" is a prime number";
    }
    cout <<endl<<endl;
    return 0;
}
