/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 8.W.A.P to find occurrences of each digit in a given integer.
Case 1:
e.g Input: int data=1277455
 output: 1=0
 2=0
 7=1
 4=0
 5=1
Case 2:
 Input int data=11111
 output: 1=4 */

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int data = 1277455; 
    unordered_map<int, int> digitCount; 

    for (int i = 0; i <= 9; ++i) {
        digitCount[i] = 0;
    }

    while (data) {
        int digit = data % 10; 
        digitCount[digit]++;
        data = data / 10; 
        digitCount[digit] - 1;
    }

    cout << "Occurrences of each digit:" << endl;
    for (int i = 0; i <= 9; ++i) {
        if (digitCount[i] > 0) {
            cout << i << "=" << digitCount[i] << endl;
        }
    }

    return 0;
}