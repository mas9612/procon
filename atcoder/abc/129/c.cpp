#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> broken(n + 1, false);
    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        broken[a] = true;
    }

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    if (!broken[1])
        dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        if (!broken[i - 1])
            dp[i] += dp[i - 1];
        if (!broken[i - 2])
            dp[i] += dp[i - 2];
        dp[i] = dp[i] % 1000000007;
    }

    cout << dp[n] << '\n';
}

