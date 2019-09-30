#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int t_gcd = gcd(a[0], a[1]);
    for (int i = 2; i < n; ++i)
        t_gcd = gcd(t_gcd, a[i]);
    cout << t_gcd << '\n';
}

