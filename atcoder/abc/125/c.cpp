#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b);

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n + 1, 0);
    for (long long i = 1; i <= n; ++i)
        cin >> a[i];

    vector<long long> l(n + 1, 0);
    for (long long i = 1; i <= n; ++i)
        l[i] = gcd(l[i - 1], a[i]);

    vector<long long> r(n + 2, 0);
    for (long long i = n; i > 0; --i)
        r[i] = gcd(r[i + 1], a[i]);

    vector<long long> m(n + 1, 0);
    for (long long i = 1; i <= n; ++i)
        m[i] = gcd(l[i - 1], r[i + 1]);

    long long ans = 0;
    for (long long i = 1; i <= n; ++i)
        ans = max(ans, m[i]);
    cout << ans << '\n';
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

