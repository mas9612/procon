#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int product = a * b;
    if (product % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";
}
