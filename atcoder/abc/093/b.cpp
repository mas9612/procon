#include <iostream>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    for (int i = a; i < a + k; ++i) {
        if (i <= b)
            cout << i << '\n';
    }
    for (int i = b - k + 1; i <= b; ++i) {
        if (i > 0 && i >= (a + k))
            cout << i << '\n';
    }
}
