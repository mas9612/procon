#include <iostream>
#include <vector>

using namespace std;

int solve(vector<bool> switches, vector<vector<int>>& lights, vector<int>& p,
          int s_idx) {
    if (s_idx >= switches.size()) {
        for (int i = 0; i < lights.size(); ++i) {
            int count = 0;
            for (int j = 0; j < lights[i].size(); ++j) {
                if (switches[lights[i][j]])
                    ++count;
            }
            if (count % 2 != p[i])
                return 0;
        }
        return 1;
    }

    int c1 = solve(switches, lights, p, s_idx + 1);
    switches[s_idx] = true;
    int c2 = solve(switches, lights, p, s_idx + 1);
    return c1 + c2;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(m);
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        v[i].resize(k);
        for (int j = 0; j < k; ++j)
            cin >> v[i][j];
    }

    vector<int> p(m);
    for (int i = 0; i < m; ++i)
        cin >> p[i];

    vector<bool> s(n + 1, false);
    int count = solve(s, v, p, 1);
    cout << count << '\n';
}

