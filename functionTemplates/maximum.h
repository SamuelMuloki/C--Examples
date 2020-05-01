//
//  maximum.h
//  Line23
//
//  Created by Samuel Muloki on 01/05/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#ifndef maximum_h
#define maximum_h

// Function template maximum header
template <typename T> // or template <class T>
T maximum(T value1, T value2, T value3) {
    T maximumValue{value1}; // assume value1 is maximum

    // determine whether value2 is greater than maximumValue
    if (value2 > maximumValue) {
        maximumValue = value2;
    }

    // determine whether value3 is greater than maximumValue
    if (value3 > maximumValue) {
        maximumValue = value3;
    }

    return maximumValue;
}

#endif /* maximum_h */
