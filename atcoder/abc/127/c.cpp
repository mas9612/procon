#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int max_l = INT_MIN, min_r = INT_MAX;
    int l, r;
    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        max_l = max(max_l, l);
        min_r = min(min_r, r);
    }
    cout << max(min_r - max_l + 1, 0) << '\n';
}

