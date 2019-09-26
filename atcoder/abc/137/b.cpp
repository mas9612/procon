#include <iostream>

using namespace std;

int main() {
    int k, x;
    cin >> k >> x;

    cout << x - k + 1;
    for (int i = x - k + 2; i < x + k; ++i)
        cout << ' ' << i;
    cout << '\n';
}

