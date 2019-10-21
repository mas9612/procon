#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> broken(n + 1, false);
    for (int i = 0; i < m; ++i) {
        int b;
        cin >> b;
        broken[b] = true;
    }

    const int modulo = 1e9 + 7;
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (!broken[i - 1])
            dp[i] += dp[i - 1];
        if (i >= 2 && !broken[i - 2])
            dp[i] += dp[i - 2];

        dp[i] %= modulo;
    }

    cout << dp[n] << '\n';
}

