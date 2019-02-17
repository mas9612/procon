#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> cities(n);
    for (int i = 0; i < n; ++i)
        cin >> cities[i];

    for (int i = 0; i < n; ++i)
        cities[i] -= x;

    int d = abs(cities[0]);
    for (int i = 1; i < n; ++i)
        d = gcd(d, abs(cities[i]));
    cout << d << '\n';
}
