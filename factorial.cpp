#include <iostream>
using namespace std;
int main() {
    int num;
    int f = 1;
    cout << "enter the number: ";
    cin >> num;
    while (num >= 1) {
        f = f * num;
        num = num - 1;
    }
    cout << "factorial = " << f;
}
