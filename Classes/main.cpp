//
//  main.cpp
//  Classes
//
//  Created by samuel muloki on 04/06/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;

void displayAccount(Account account) {
    cout << "account name is " << account.getName() << "balance is $" << account.getBalance() << endl;
}

int main(int argc, const char * argv[]) {
    Account account1{"Jane Green", 50}; // use "Account account1" if constructor has no parameters
    Account account2{"John Blue", -7};
    
    displayAccount(account1);
    displayAccount(account2);
    
    cout << "\n\n Enter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account1 balance" << endl;
    account1.deposit(depositAmount);
    
    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\n Enter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account2 balance" << endl;
    account2.deposit(depositAmount);
    
    displayAccount(account1);
    displayAccount(account2);
}
