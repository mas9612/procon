#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

struct item {
    int weight;
    int value;
};

int main() {
    int n, w;
    cin >> n >> w;

    vector<item> items(n + 1, {0, 0});
    for (int i = 1; i <= n; ++i)
        cin >> items[i].weight >> items[i].value;

    vector<vector<long>> dp(n + 1, vector<long>(w + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= w; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j - items[i].weight >= 0) {
                dp[i][j] = max(dp[i][j],
                               dp[i - 1][j - items[i].weight] + items[i].value);
            }
        }
    }
    cout << dp[n][w] << '\n';
}
