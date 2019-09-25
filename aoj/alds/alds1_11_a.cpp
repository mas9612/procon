#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;
        --u;  // want to store graph as 0-origin

        for (int j = 0; j < k; ++j) {
            int adj;
            cin >> adj;
            g[u][adj - 1] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << g[i][0];
        for (int j = 1; j < n; ++j)
            cout << ' ' << g[i][j];
        cout << '\n';
    }
}

