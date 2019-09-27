#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a >= 13)
        cout << b << '\n';
    else if (a <= 5)
        cout << 0 << '\n';
    else
        cout << b / 2 << '\n';
}

