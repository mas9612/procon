#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> G(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        int v, nv;
        cin >> v >> nv;
        --v;
        for (int j = 0; j < nv; ++j) {
            int adjacency;
            cin >> adjacency;
            --adjacency;
            G[v][adjacency] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << G[i][0];
        for (int j = 1; j < n; ++j)
            cout << ' ' << G[i][j];
        cout << '\n';
    }
}

