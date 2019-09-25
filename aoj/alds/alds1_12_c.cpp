#include <climits>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

void dijkstra(vector<vector<pair<int, int>>>& g, vector<int>& weights) {
    int n_vertex = weights.size();
    vector<bool> visited(n_vertex, false);

    auto pq_compare = [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(pq_compare)>
        pq(pq_compare);

    weights[0] = 0;
    pq.push(make_pair(0, weights[0]));
    while (!pq.empty()) {
        pair<int, int> min_pair = pq.top();
        pq.pop();
        int min_idx = min_pair.first;

        if (min_pair.second > weights[min_idx])
            continue;

        visited[min_idx] = true;

        for (int i = 0; i < g[min_idx].size(); ++i) {
            int adj = g[min_idx][i].first;
            int weight_via_idx = weights[min_idx] + g[min_idx][i].second;
            if (!visited[adj] && weight_via_idx < weights[adj]) {
                weights[adj] = weight_via_idx;
                pq.push(make_pair(adj, weights[adj]));
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

