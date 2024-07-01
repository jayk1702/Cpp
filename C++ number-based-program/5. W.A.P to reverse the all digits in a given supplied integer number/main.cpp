/* 5. W.A.P to reverse the all digits in a given supplied integer number.
Input: int data=12345
output: data=54321. */


#include <iostream>
using namespace std;

int main()
{
    int data = 12345;
    int digit = 0;
    cout << "data=";
    while(data>0)
    {
        digit = data % 10;
        cout << digit;
        data = data / 10;
    }
    
    return 0;
}
