#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<vector<int>>& g, vector<int>& dist) {
    queue<int> q;
    vector<bool> visited(g.size(), false);
    q.push(1);
    dist[1] = 0;
    while (!q.empty()) {
        int idx = q.front();
        q.pop();
        visited[idx] = true;

        for (int i = 0; i < g[idx].size(); ++i) {
            int adj = g[idx][i];
            if (!visited[adj]) {
                q.push(adj);
                if (dist[adj] != -1)
                    dist[adj] = min(dist[adj], dist[idx] + 1);
                else
                    dist[adj] = dist[idx] + 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> g(n + 1);
    for (int i = 1; i <= n; ++i) {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            g[i].push_back(v);
        }
    }

    vector<int> dist(n + 1, -1);
    bfs(g, dist);

    for (int i = 1; i <= n; ++i)
        cout << i << ' ' << dist[i] << '\n';
}

