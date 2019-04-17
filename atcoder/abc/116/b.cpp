#include <iostream>
#include <vector>

using namespace std;

int f(int n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return 3 * n + 1;
}

int main() {
    int s;
    cin >> s;

    const int max_m = 100000;
    vector<bool> v(max_m + 1, false);
    int prev = s;  // prev stores v[i-1]
    v[s] = true;
    for (int i = 2;; ++i) {
        int t = f(prev);
        if (v[t]) {
            cout << i << '\n';
            break;
        }
        prev = t;
        v[t] = true;
    }
}
