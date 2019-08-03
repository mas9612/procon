#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1, b;
    while (true) {
        b = n - a;
        if (a >= 1 && a <= 10 && b >= 1 && b <= 10)
            break;
        ++a;
    }
    cout << a << ' ' << b << '\n';
}

