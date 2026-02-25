#include <iostream>
using namespace std;

int main() {
    int num, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 100) {
        int lastDigit = temp % 10;
        temp = temp / 10 + 4 * lastDigit;
    }

    if (temp % 13 == 0)
        cout << num << " is divisible by 13";
    else
        cout << num << " is not divisible by 13";

    return 0;
}
