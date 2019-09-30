#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int A, B, C;

int dfs(vector<int>& v, int current, int ba, int bb, int bc) {
    if (current >= v.size()) {
        if (ba == 0 || bb == 0 || bc == 0)
            return 1e9;
        else {
            int ret = abs(ba - A) + abs(bb - B) + abs(bc - C);
            return ret;
        }
    }

    int ret = dfs(v, current + 1, ba, bb, bc);
    ret = min(
        ret, dfs(v, current + 1, ba + v[current], bb, bc) + (ba == 0 ? 0 : 10));
    ret = min(
        ret, dfs(v, current + 1, ba, bb + v[current], bc) + (bb == 0 ? 0 : 10));
    ret = min(
        ret, dfs(v, current + 1, ba, bb, bc + v[current]) + (bc == 0 ? 0 : 10));
    return ret;
}

int main() {
    int n;
    cin >> n >> A >> B >> C;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int ret = dfs(v, 0, 0, 0, 0);
    cout << ret << '\n';
}

