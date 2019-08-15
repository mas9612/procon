#include <iostream>

using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    long long rest = 0;
    if (x <= z)
        ++rest;
    if (y <= z)
        ++rest;

    cout << z - rest << '\n';
}

