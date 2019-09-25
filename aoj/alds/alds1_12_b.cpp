#include <climits>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void dijkstra(vector<vector<pair<int, int>>>& g, vector<int>& weights) {
    int n_vertex = weights.size();
    vector<bool> visited(n_vertex, false);
    weights[0] = 0;
    while (true) {
        int min_idx;
        int min_weight = INT_MAX;
        for (int i = 0; i < n_vertex; ++i) {
            if (!visited[i] && weights[i] < min_weight) {
                min_idx = i;
                min_weight = weights[i];
            }
        }

        if (min_weight == INT_MAX)
            break;

        visited[min_idx] = true;

        for (int i = 0; i < g[min_idx].size(); ++i) {
            int adj = g[min_idx][i].first;
            int weight_via_idx = weights[min_idx] + g[min_idx][i].second;
            if (!visited[adj] && weight_via_idx < weights[adj]) {
                weights[adj] = weight_via_idx;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            int v, c;
            cin >> v >> c;
            g[i].push_back(make_pair(v, c));
        }
    }

    vector<int> weights(n, INT_MAX);
    dijkstra(g, weights);
    for (int i = 0; i < n; ++i)
        cout << i << ' ' << weights[i] << '\n';
}

