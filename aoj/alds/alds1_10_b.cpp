#include <climits>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> m(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        m[i] = make_pair(a, b);
    }

    vector<vector<int>> v(n, vector<int>(n, INT_MAX));
    for (int i = 0; i < n; ++i)
        v[i][i] = 0;

    for (int width = 2; width <= n; ++width) {
        for (int i = 0; i < n - width + 1; ++i) {
            int j = i + width - 1;
            for (int k = i; k < j; ++k) {
                v[i][j] =
                    min(v[i][j], v[i][k] + v[k + 1][j] +
                                     m[i].first * m[k].second * m[j].second);
            }
        }
    }
    cout << v[0][n - 1] << '\n';
}

