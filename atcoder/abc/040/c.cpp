#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    const int inf = INT_MAX / 2;
    vector<int> dp(n, inf);
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        dp[i] = dp[i - 1] + abs(v[i] - v[i - 1]);
        if (i >= 2)
            dp[i] = min(dp[i], dp[i - 2] + abs(v[i] - v[i - 2]));
    }

    cout << dp[n - 1] << '\n';
}

