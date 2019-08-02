#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;
    int max = pow(2, n);
    int base = pow(2, k);
    for (int i = 1; base * i <= max; ++i)
        ++count;

    cout << count << '\n';
}

