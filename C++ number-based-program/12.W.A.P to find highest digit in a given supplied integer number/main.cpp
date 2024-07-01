/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 12.W.A.P to find highest digit in a given supplied integer number.
e.g: Input int data=124455.
 Output: highest digit is 5*/


#include <iostream>
using namespace std;

int main() {
    int data = 124455;

    int highest = 0;

    while (data > 0) {
        int digit = data % 10;
        if (digit > highest) {
            highest = digit;
        }
        data /= 10;
    }

    cout << "Highest digit is " << highest << endl;

    return 0;
}