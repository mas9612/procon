#include <algorithm>
#include <climits>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n, w;
    cin >> n >> w;

    vector<pair<long long, long long>> goods(n + 1);
    for (int i = 1; i <= n; ++i) {
        long long w, v;
        cin >> w >> v;
        goods[i] = make_pair(w, v);
    }

    const int inf = INT_MAX / 2;
    const int dp_max = 100 * 1e3;
    vector<vector<long long>> dp(n + 1, vector<long long>(dp_max + 1, inf));
    dp[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= dp_max; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j - goods[i].second >= 0) {
                dp[i][j] = min(dp[i][j],
                               dp[i - 1][j - goods[i].second] + goods[i].first);
            }
        }
    }

    long long result = 0;
    for (int i = dp_max; i >= 0; --i) {
        if (dp[n][i] <= w) {
            result = i;
            break;
        }
    }
    cout << result << '\n';
}

