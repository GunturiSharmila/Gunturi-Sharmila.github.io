#include <iostream>
using namespace std;
int main() {
    int num;
    int reverse = 0;
    int rem;
    cout << "enter the number: ";
    cin >> num;
    while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    cout << "reversed number = " << reverse << endl;
        return 0;
}
