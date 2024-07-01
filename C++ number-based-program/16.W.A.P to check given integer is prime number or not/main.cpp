/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 16.W.A.P to check given integer is prime number or not. */

#include <iostream>
using namespace std;

int main() {
    int data;
    cout << "Enter an integer: ";
    cin >> data;

    if (data <= 1) {
        cout << data << " is not a prime number." << endl;
        return 0;
    }

    bool prime = true;
    for (int i = 2; i <= data / 2; ++i) {
        if (data % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << data << " is a prime number." << endl;
    } else {
        cout << data << " is not a prime number." << endl;
    }

    return 0;
}