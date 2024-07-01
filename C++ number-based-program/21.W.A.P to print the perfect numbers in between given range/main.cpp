/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 21.W.A.P to print the perfect numbers in between given range. */

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) return false; 

    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Perfect numbers between " << start << " and " << end << " are: ";

    bool found = false;
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
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