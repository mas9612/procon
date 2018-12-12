#include <iostream>
#include <vector>

using namespace std;

int current = 0;
vector<int> d(100, 0);
vector<int> f(100, 0);
vector<bool> visited(100, false);

void dfs(vector<vector<int>>& G, int vid)
{
    if (!visited[vid]) {
        ++current;
        d[vid] = current;
        visited[vid] = true;

        int size = G[vid].size();
        for (int i = 0; i < size && G[vid][i] > -1; ++i)
            dfs(G, G[vid][i]);

        ++current;
        f[vid] = current;
    }
}

int main()
{
    int n;
    cin >> n;

    // adjacency list (-1 means the end of adjacencies)
    vector<vector<int>> G(n, vector<int>(n, -1));
    for (int i = 0; i < n; ++i) {
        int v, nv;
        cin >> v >> nv;
        --v;
        for (int j = 0; j < nv; ++j) {
            int tmp;
            cin >> tmp;
            --tmp;
            G[v][j] = tmp;
        }
    }

    for (int i = 0; i < n; ++i)
        dfs(G, i);

    for (int i = 0; i < n; ++i)
        cout << i+1 << ' ' << d[i] << ' ' << f[i] << '\n';
}

