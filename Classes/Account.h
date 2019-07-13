//
//  Account.h
//  Classes
//
//  Created by samuel muloki on 04/06/2019.
//  Copyright © 2019 line23. All rights reserved.
//

#ifndef Account_h
#define Account_h

class Account {
public: // Access specifier
    Account(std::string accountName, int initialBalance) // use explicit if it takes single parameter
        : name{accountName} { // member initializer. Assign accountName to data member name
        
            // validate that the initial balance is greater than 0; if not data member keeps its initial default value of 0
            if (initialBalance > 0) {
                balance = initialBalance; // assign it to data member balance
            }
    }
    
    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }
    
    int getBalance() const {
        return balance;
    }
    
    void setName(std::string accountName) {
        name = accountName;
    }
    
    std::string getName() const { // use const because the process of returning the value should not modify the account object
        return name;
    }
    
public:
    std::string name; // account name data member
    int balance{0}; // data member with default initial value
};

#endif /* Account_h */
