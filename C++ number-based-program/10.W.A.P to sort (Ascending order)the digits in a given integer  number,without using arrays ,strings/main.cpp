/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 10.W.A.P to sort (Ascending order)the digits in a given integer 
number,without using arrays ,strings.
e.g: Input int data=4263 
 output: 2346 */


#include <iostream>
using namespace std;

int main() {
    int data = 44263;
    

    int count[10] = {0};

    while (data > 0) {
        int digit = data % 10;
        count[digit]++;
        data /= 10;
    }

    cout << "Sorted digits: ";
    for (int i = 0; i < 10; i++) {
        while (count[i] > 0) {
            cout << i;
            count[i]--;
        }
    }
    cout << endl;

    return 0;
}