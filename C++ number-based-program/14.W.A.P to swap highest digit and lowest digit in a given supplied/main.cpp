/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 14.W.A.P to swap highest digit and lowest digit in a given supplied 
integer number.
e.g: Input int data=12345.
 Output: highest digit is 5 and lowest digit is 1
 after swap data=52341 */

#include <iostream>
using namespace std;

int main() {
    int data = 12345, mainData;
    mainData = data;

    int highest = 0, lowest = 9;
    int highestPos = -1, lowestPos = -1;
    int pos = 0;

    while (data > 0) {
        int digit = data % 10;
        if (digit > highest) {
            highest = digit;
            highestPos = pos;
        }
        if (digit < lowest) {
            lowest = digit;
            lowestPos = pos;
        }
        data /= 10;
        pos++;
    }

    data = mainData;
    int result = 0;
    int factor = 1;

    for (int i = 0; i < pos; i++) {
        int digit = data % 10;
        if (i == highestPos) {
            digit = lowest;
        } else if (i == lowestPos) {
            digit = highest;
        }
        result += digit * factor;
        data /= 10;
        factor *= 10;
    }

    cout << "Highest digit is " << highest << " and lowest digit is " << lowest << endl;
    cout << "After swap, data = " << result << endl;

    return 0;
}