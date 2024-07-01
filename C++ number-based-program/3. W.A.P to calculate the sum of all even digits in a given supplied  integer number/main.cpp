/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 3. W.A.P to calculate the sum of all even digits in a given supplied 
integer number.
Input: int data=1234
Output : sum of all digits is 6 
here 2,4 are the even digit. */


#include <iostream>
using namespace std;

int main()
{
    int data = 1234;
    int sum = 0;
    int digit = 0;

    while(data>0)
    {
        digit = data % 10;
        if(digit%2==0)
        {
            sum += digit;
        }
        data = data / 10;
    }
    
    cout << sum;

    return 0;
}