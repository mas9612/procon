#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// gcd(a, b) * lcm(a, b) = ab
long long lcm(long long a, long long b) { return a * b / gcd(a, b); }

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long div_by_c = b / c - (a - 1) / c;
    long long div_by_d = b / d - (a - 1) / d;
    long long l = lcm(c, d);
    long long div_by_cd = b / l - (a - 1) / l;

    long long ans = (b - a + 1) - div_by_c - div_by_d + div_by_cd;
    cout << ans << '\n';
}

