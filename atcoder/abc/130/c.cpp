#include <iostream>

using namespace std;

int main() {
    double w, h, x, y;
    cin >> w >> h >> x >> y;

    cout << w * h / 2.0 << ' ';
    if (2 * x == w && 2 * y == h)
        cout << "1\n";
    else
        cout << "0\n";
}

