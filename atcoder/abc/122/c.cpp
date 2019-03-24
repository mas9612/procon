#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> dp(n, 0);
    for (int i = 1; i < n; ++i) {
        if (s[i] == 'C' && s[i - 1] == 'A')
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = dp[i - 1];
    }

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << '\n';
    }
}
