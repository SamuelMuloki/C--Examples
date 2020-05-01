//
//  main.cpp
//  MathLibraryFunctions
//
//  Created by Samuel Muloki on 25/04/2020.
//  Copyright © 2020 line23. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

// function prototypes
int maximum(int x, int y, int z);
void displayRandomNumbers();
unsigned int rollDice();
void crapSimulation();
void useStaticLocal();

int main(int argc, const char * argv[]) {
    // square root
    int mySquareRoot = sqrt(13.0 + 3.0 * 4.0);
    std::cout << mySquareRoot <<std::endl;
    // Raised to the power
    std::cout << pow(2, 5) <<std::endl;
    // Cosine
    std::cout << cos(180) <<std::endl;

    // Returns the max
    std::cout << maximum(5, 25, 12) <<std::endl;

    // Displaying random values from 1 to 6
    displayRandomNumbers();

    // Play game
    crapSimulation();

    // Static variables
//    useStaticLocal();
//    useStaticLocal();

    // display current time
    std::cout << time(0) <<std::endl;
    return 0;
}

// Returns the largest of three numbers
int maximum(int x, int y, int z) {
    int maximumValue{x}; // Assume x is the largest to start

    if (y > maximumValue) {
        maximumValue = y;
    }

    if (z > maximumValue) {
        maximumValue =  z;
    }

    return maximumValue;
};

void displayRandomNumbers() {

    //to randomise without having to enter seed each time
    srand(static_cast<unsigned int>(time(0)));

    for (unsigned int counter{1}; counter <= 20; counter++) {
        // pick a random number from 1 to 6 and output it
        std::cout << std::setw(10) << (1 + rand() % 6);

        // if counter is divisible by 5, start a new line of output
        if(counter % 5 == 0) {
            std::cout <<std::endl;
        }
    }
}

void crapSimulation() {
    // scoped enumerations with constants that represent the game status
    enum class Status {CONTINUE, WON, LOST};
    // randomise random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint{0}; // point if no win or loss on the first roll
    Status gamesatus;
    unsigned int sumOfDice{rollDice()}; // first roll of th dice

    // determine game status and point (if needed) based on first roll
    switch (sumOfDice) {
        case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll
            gamesatus = Status::WON;
            break;
        case 2: // lost with 2 on first roll
        case 3: // lost with 3 on first roll
        case 12: // lost with 12 on first roll
            gamesatus = Status::LOST;
            break;

        default: // did not win or lose, so remember point
            gamesatus = Status::CONTINUE; // game is not over
            myPoint = sumOfDice; // remember the point
            std::cout << "Point is " << myPoint << std::endl;
            break;
    }

    // while game is not complete
    while (Status::CONTINUE == gamesatus) { // not WON or LOST
        sumOfDice = rollDice();

        // determine game status
        if(sumOfDice == myPoint) {
            gamesatus = Status::WON;
        } else {
            if (sumOfDice == 7) {
                gamesatus = Status::LOST;
            }
        }
    }

    if(Status::WON == gamesatus) {
        std::cout << "Player wins" << std::endl;
    } else {
        std::cout << "Player loses" << std::endl;
    }
}

unsigned int rollDice() {
    int die1{1 + rand() % 6};
    int die2{1 + rand() % 6};
    int sum{die1 + die2};

    // display results of this roll
    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
    return sum;
}

void useStaticLocal() {
    static int localVar{10};

    std::cout << "\nlocal static localVar is " << localVar << " on entering useStaticLocal" << std::endl;
    localVar++;
    std::cout << "\nlocal static localVar is " << localVar << " on exiting useStaticLocal" << std::endl;
}
