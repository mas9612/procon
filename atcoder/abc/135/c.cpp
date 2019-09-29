#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n + 1);
    vector<long long> b(n);
    for (int i = 0; i <= n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    long long total = 0;
    for (int i = 0; i < n; ++i) {
        long long c1 = min(a[i], b[i]);
        b[i] -= c1;
        long long c2 = min(a[i + 1], b[i]);
        a[i + 1] -= c2;
        total += c1 + c2;
    }
    cout << total << '\n';
}

