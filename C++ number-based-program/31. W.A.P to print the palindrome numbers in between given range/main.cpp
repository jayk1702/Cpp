/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 31. W.A.P to print the palindrome numbers in between given range. */


#include <iostream>
using namespace std;


int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Palindrome numbers between " << start << " and " << end << " are: ";

    bool found = false;
    for (int i = start; i <= end; ++i) {
        if (isPalindrome(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
    return 0;
}