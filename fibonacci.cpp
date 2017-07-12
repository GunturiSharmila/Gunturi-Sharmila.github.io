#include <iostream>
using namespace std;
int main() {
    int i;
    int n;
    int num1 = 0;
    int num2 = 1;
    int num3;
    cout << "enter last number of the series: ";
    cin >> n;
    cout << num1<< endl << num2 << endl;
    for (i = 0;i < n - 2; i++) {
        num3 = num1 + num2;
        cout << num3 << endl;
        num1 = num2;
        num2 = num3;
    }
    return 0;
}


