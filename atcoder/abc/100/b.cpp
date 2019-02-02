#include <iostream>

using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    int dd = 1;
    for (int i = 0; i < d; ++i)
        dd *= 100;

    if (n != 100)
        cout << dd * n << '\n';
    else
        cout << dd * (n + 1) << '\n';
}
