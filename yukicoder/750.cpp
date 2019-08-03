#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);
bool compare(tuple<int, int, int>& a, tuple<int, int, int>& b);

int main() {
    int n;
    cin >> n;

    int denominator = 1;
    vector<tuple<int, int, int>> frac(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        frac[i] = make_tuple(a, b, 0);
        denominator = lcm(denominator, get<1>(frac[i]));
    }

    for (int i = 0; i < n; ++i) {
        int x = denominator / get<1>(frac[i]);
        get<2>(frac[i]) = get<0>(frac[i]) * x;
    }

    sort(frac.begin(), frac.end(), compare);

    for (int i = 0; i < n; ++i)
        cout << get<0>(frac[i]) << ' ' << get<1>(frac[i]) << '\n';
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

bool compare(tuple<int, int, int>& a, tuple<int, int, int>& b) {
    return get<2>(a) > get<2>(b);
}

