#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    long long min_value = INT_MAX;
    long long limit = min(l + 2019, r + 1);
    for (long long i = l; i < limit - 1; ++i) {
        for (long long j = i + 1; j < limit; ++j) {
            long long mod = i * j % 2019;
            if (mod < min_value)
                min_value = mod;
        }
    }
    cout << min_value << '\n';
}

