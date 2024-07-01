/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 20.W.A.P to check the given number is perfect number or not.
 e.g: input int data=123
 output: no
 int data=6
 output : yes
perfect number is a positive integer that is equal to the sum of its
proper divisors. The smallest perfect number is 6, which is the sum 
of 1, 2, and 3. */

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) return false; /

    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int data;
    cout << "Enter an integer: ";
    cin >> data;

    if (isPerfect(data)) {
        cout << "Yes, " << data << " is a perfect number." << endl;
    } else {
        cout << "No, " << data << " is not a perfect number." << endl;
    }

    return 0;
}