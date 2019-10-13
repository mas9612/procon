#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> happy(3, vector<int>(n + 1));
    for (int i = 1; i <= n; ++i)
        cin >> happy[0][i] >> happy[1][i] >> happy[2][i];

    vector<vector<int>> dp(3, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; ++i) {
        dp[0][i] = max(dp[1][i - 1] + happy[0][i], dp[2][i - 1] + happy[0][i]);
        dp[1][i] = max(dp[2][i - 1] + happy[1][i], dp[0][i - 1] + happy[1][i]);
        dp[2][i] = max(dp[0][i - 1] + happy[2][i], dp[1][i - 1] + happy[2][i]);
    }

    int max_val = dp[0][n];
    for (int i = 1; i < 3; ++i)
        max_val = max(max_val, dp[i][n]);
    cout << max_val << '\n';
}

