#include <iostream>
#include <vector>

using namespace std;

struct vertex {
    bool visited;
    int d;
    int f;

    vertex() : visited(false), d(0), f(0) {}
};

int current_time = 1;

void dfs(vector<vector<int>>& g, vector<vertex>& info, int index) {
    if (info[index].visited)
        return;

    info[index].d = current_time;
    info[index].visited = true;
    ++current_time;

    for (int i = 0; i < g[index].size(); ++i)
        dfs(g, info, g[index][i]);
    info[index].f = current_time;
    ++current_time;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }

    vector<vertex> result_info(n + 1);
    for (int i = 1; i <= n; ++i) {
        if (!result_info[i].visited)
            dfs(g, result_info, i);
    }

    for (int i = 1; i <= n; ++i)
        cout << i << ' ' << result_info[i].d << ' ' << result_info[i].f << '\n';
}

