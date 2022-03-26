//code to role dice and coin n times..
// Simple use of for loop 


#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    //to role a dice n times
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
    //toss a coin n times
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 2) << endl;
    }
}

// For loop implementation
// code to role a dice and coin
