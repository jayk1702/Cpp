/* 7.W.A.P to check how many occurrences of given digit in a given 
integer number.
Case 1:
Intput : int data=12334.
 int d=3
Output: 3 have 2 occurrences
Case 2:
Intput : int data=12334.
 int d=7
Output: 7 have no any occurrences. */


#include <iostream>
using namespace std;

int main() {
    int data = 12334; 
    int d = 3; 
    int count = 0; 

    while (data) {
        int digit = data % 10; 
        if (digit == d) {
            count++;
        }
        data = data / 10; 
    }

    cout << count << endl;

    return 0;
}
