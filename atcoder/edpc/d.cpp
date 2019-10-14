#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n, w;
    cin >> n >> w;

    vector<pair<long long, long long>> goods(n + 1);
    for (int i = 1; i <= n; ++i) {
        int w, v;
        cin >> w >> v;
        goods[i] = make_pair(w, v);
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(w + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= w; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j >= goods[i].first) {
                dp[i][j] = max(dp[i][j],
                               dp[i - 1][j - goods[i].first] + goods[i].second);
            }
        }
    }

    cout << dp[n][w] << '\n';
}

