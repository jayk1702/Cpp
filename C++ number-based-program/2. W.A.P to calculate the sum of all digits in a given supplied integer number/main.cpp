/*2. W.A.P to calculate the sum of all digits in a given supplied integer
number.
Input: int data=1234
Output : sum of all digits is 10*/


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
        sum += digit;
        data = data / 10;
    }
    
    cout << sum;

    return 0;
}
