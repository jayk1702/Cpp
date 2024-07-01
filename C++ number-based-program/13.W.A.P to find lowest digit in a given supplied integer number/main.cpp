/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 13.W.A.P to find lowest digit in a given supplied integer number.
e.g: Input int data=114455.
 Output: lowest digit is 1. */

#include <iostream>
using namespace std;

int main() {
    int data = 114455;

    int lowest = 9;

    if (data == 0) {
        lowest = 0;
    } else {
        while (data > 0) {
            int digit = data % 10;
            if (digit < lowest) {
                lowest = digit;
            }
            data /= 10;
        }
    }

    cout << "Lowest digit is " << lowest << endl;

    return 0;
    
}
