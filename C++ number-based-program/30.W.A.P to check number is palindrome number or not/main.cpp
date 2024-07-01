/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 30.W.A.P to check number is palindrome number or not.
Palindrome number is nothing but reverse is eqaul to that number.
e.g : input int data=151
 output: YES.
Input int data=345
output : NO */

#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

int main() {
    int data;
    cout << "Enter an integer: ";
    cin >> data;

    if (isPalindrome(data)) {
        cout << "YES, " << data << " is a palindrome." << endl;
    } else {
        cout << "NO, " << data << " is not a palindrome." << endl;
    }

    return 0;
}