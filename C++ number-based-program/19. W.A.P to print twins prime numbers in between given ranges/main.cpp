/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 19. W.A.P to print twins prime numbers in between given ranges.
Explanation:Suppose range is 1 to 50 so prime numbers between this
range are
2,3,5,7,11,13,17,19,23,29,31,37,41,43,47
so twins prime numbers are(3,5),(11,13),(17,19),(29,31),(41,43)
difference between two prime number is only 2 hence they are twins 
prime number. */

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
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Twin prime numbers between " << start << " and " << end << " are: ";

    int prevPrime = -1;

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            if (prevPrime != -1 && i - prevPrime == 2) {
                cout << "(" << prevPrime << ", " << i << ") ";
            }
            prevPrime = i;
        }
    }

    cout << endl;
    return 0;
}