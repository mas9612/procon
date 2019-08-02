#include <iostream>

using namespace std;

int main() {
    int c;
    cin >> c;

    for (int i = 1; i <= c; ++i) {
        if (c % i == 0) {
            cout << i << ' ' << c / i << '\n';
            break;
        }
    }
}

