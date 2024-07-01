/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 15.W.A.P to find second highest digit in a given supplied integer 
number.
e.g: Input int data=124455.
 Output: highest digit is 4. */


#include <iostream>
using namespace std;

int main() {
    int data = 124455;

    int highest = -1, secondHighest = -1;

    while (data > 0) {
        int digit = data % 10;
        if (digit > highest) {
            secondHighest = highest;
            highest = digit;
        } else if (digit < highest && digit > secondHighest) {
            secondHighest = digit;
        }
        data /= 10;
    }

    if (secondHighest == -1) {
        cout << "There is no second highest digit." << endl;
    } else {
        cout << "Second highest digit is " << secondHighest << "." << endl;
    }

    return 0;
}