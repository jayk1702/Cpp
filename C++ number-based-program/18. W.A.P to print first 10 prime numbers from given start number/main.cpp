/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 18. W.A.P to print first 10 prime numbers from given start number.
Explanation: suppose start is 30 so you have to print first 10 prime 
numbers from 30. */

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start;
    cout << "Enter the start number: ";
    cin >> start;

    cout << "First 10 prime numbers starting from " << start << " are: ";

    int count = 0; 
    int num = start;

    while (count < 10) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    cout << endl;
    return 0;
}