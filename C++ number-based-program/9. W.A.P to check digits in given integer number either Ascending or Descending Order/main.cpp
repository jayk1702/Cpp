/* 9. W.A.P to check digits in given integer number either Ascending or
Descending Order.
e.g: Input int data=1234.
Output : this is ascending order.
Case 2:
int data=5432.
Output : this is descending order.
Case 3:
int data=1324
Output : given integer data not in order */

#include <iostream>
using namespace std;

void checkOrder(int num) {
    bool ascending = true;
    bool descending = true;
    int previousDigit = num % 10;
    num /= 10;

    while (num > 0) {
        int currentDigit = num % 10;
        if (currentDigit < previousDigit) {
            ascending = false;
        }
        if (currentDigit > previousDigit) {
            descending = false;
        }
        previousDigit = currentDigit;
        num /= 10;
    }

    if (ascending) {
        cout << "This is ascending order." << endl;
    } else if (descending) {
        cout << "This is descending order." << endl;
    } else {
        cout << "Given integer data is not in order." << endl;
    }
}

int main() {
    int data;
    cout << "Enter an integer: ";
    cin >> data;
    checkOrder(data);
    return 0;
}
