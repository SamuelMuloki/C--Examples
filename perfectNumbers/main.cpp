//
//  main.cpp
//  perfectNumbers
//
//  Created by samuel muloki on 12/05/2019.
//  Copyright © 2019 line23. All rights reserved.
//

/* Note : According to Wikipedia : In number theory, a perfect number is a positive integer
that is equal to the sum of its proper positive divisors, that is, the sum of its positive
divisors excluding the number itself (also known as its aliquot sum). Equivalently, a
perfect number is a number that is half the sum of all of its positive divisors (including
itself).
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int num, i=1, sum=0;
    cout <<"Enter a number: ";
    cin >> num;
    while(i < num) {
        if (num % i == 0)
            sum = sum + i;
            i++;
    }
    if (sum == num && sum != 0) {
        cout <<num<<" is a perfect number";
    } else
        cout <<num<<" is not a perfect number";;
    cout <<endl<<endl;
    return 0;
}
