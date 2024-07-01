/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 22.W.A.P to print the factorial of each digit in given integer number.
Intput int data=123.
Output : 9 … (1! + 2! + 3! =9) */

#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int data;
    cout << "Enter an integer: ";
    cin >> data;

    int sum = 0;
    int temp = data;

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    cout << "Sum of factorials: " << sum << endl;

    return 0;
}