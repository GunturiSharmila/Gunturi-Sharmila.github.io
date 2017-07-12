#include <iostream>
using namespace std;
int main() {
    int num;
    int reverse = 0;
    int remainder;
    int n;
    cout << "enter the number: ";
    cin >> num;
    n = num;
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if (reverse == n) {
        cout << "palindrome"<< endl;
    } else {
        cout << "not a palindrome"<< endl;
    }
}

