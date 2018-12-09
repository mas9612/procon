#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> G(n+1, vector<int>(n+1, 0));
    for (int i = 0; i < n; ++i) {
        int v, nv;
        cin >> v >> nv;
        for (int j = 0; j < nv; ++j) {
            int adjacency;
            cin >> adjacency;
            G[v][adjacency] = 1;
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << G[i][1];
        for (int j = 2; j <= n; ++j)
            cout << ' ' << G[i][j];
        cout << '\n';
    }
}

