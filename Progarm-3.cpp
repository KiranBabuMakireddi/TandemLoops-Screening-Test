#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    for (int i = 1; i <= a; i++) {
        cout << (2 * i - 1); // Formula for odd numbers
        if (i != a) cout << ", ";
    }
    cout << endl;

    return 0;
}
