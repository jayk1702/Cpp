/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 6.W.A.P to delete the given digit in a given integer.
e.g: Input int data=132345;
 digit=3;
Output: data=1245 */

#include <iostream>
using namespace std;

int main() {
    int data = 132345, digit = 3;

    int result = 0;
    int factor = 1;

    while (data > 0) {
        int currentDigit = data % 10;
        if (currentDigit != digit) {
            result += currentDigit * factor;
            factor *= 10;
        }
        data /= 10;
    }

    cout << "Result after deleting the digit: " << result << endl;

    return 0;
}