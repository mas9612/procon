#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < n; ++i) {
        int cost1 = dp[i - 1] + abs(h[i] - h[i - 1]);
        int cost2 = dp[i - 2] + abs(h[i] - h[i - 2]);
        dp[i] = min(cost1, cost2);
    }
    cout << dp[n - 1] << '\n';
}

