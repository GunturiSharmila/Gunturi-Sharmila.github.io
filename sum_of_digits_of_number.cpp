#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;
    int digit;
    cout << "enter the number: ";
    cin >> num;
    while(num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    cout << "sum of digits of a number = " << sum << endl;
}
