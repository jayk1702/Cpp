
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
