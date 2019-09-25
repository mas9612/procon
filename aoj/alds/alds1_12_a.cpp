#include <climits>
#include <iostream>
#include <vector>

using namespace std;

// calculate Minimum Spanning Tree with Prim's algorithm
void mst(vector<vector<int>>& g, vector<int>& weights) {
    int n_vertex = weights.size();
    vector<bool> mst(n_vertex, false);

    weights[0] = 0;
    while (true) {
        int idx;
        int min_weight = INT_MAX;
        for (int i = 0; i < n_vertex; ++i) {
            if (!mst[i] && weights[i] < min_weight) {
                idx = i;
                min_weight = weights[i];
            }
        }

        if (min_weight == INT_MAX)
            break;

        mst[idx] = true;

        for (int i = 0; i < n_vertex; ++i) {
            if (!mst[i] && g[idx][i] != -1)
                weights[i] = min(weights[i], g[idx][i]);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cin >> g[i][j];
    }

    vector<int> weights(n, INT_MAX);
    mst(g, weights);

    int sum_of_weights = 0;
    for (int i = 0; i < n; ++i)
        sum_of_weights += weights[i];
    cout << sum_of_weights << '\n';
}

