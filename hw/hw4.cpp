/*
Coin Toss

Write a function named coinToss that simulates the tossing of a coin. When you call the function, it should generate a random number in the range of 1 through 2.
If the random number is 1, the function should display “heads.”
If the random number is 2, the function should display “tails.”
Demonstrate the function in a program that asks the user how many times the coin should be tossed and then simulates the tossing of the coin that number of times.
 */
//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Prototype
void coinToss();

int main() {
    int n, i;
    srand(time(nullptr));
    rand();
    rand();
    rand();

    cout << "How many times? ";
    cin >> n;
    //ADD YOUR CODE FROM HERE

    for (i = 0; i < n; i++) {
        coinToss();
    }
}

void coinToss() {
    if (rand() % 2 == 0) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
}

