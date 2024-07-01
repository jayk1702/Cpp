/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*1. W.A.P to count the digits in a given supplied integer number.
e.g: if given integer is int data= 12345.
 output:- digit=5*/

#include <iostream>
using namespace std;

int main()
{
    int data = 12345;
    int digit = 0;
    
    do {
        data = data / 10;
        digit++;
    }while(data!=0);
    
    cout << "digit=" << digit ;

    return 0;
}