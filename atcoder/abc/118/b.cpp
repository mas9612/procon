#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<bool>> v(n, vector<bool>(m + 1, false));
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            int t;
            cin >> t;
            v[i][t] = true;
        }
    }

    int count = 0;
    for (int i = 1; i < m + 1; ++i) {
        bool flag = true;
        for (int j = 0; j < n; ++j) {
            if (!v[j][i]) {  // look from the first food
                flag = false;
                break;
            }
        }
        if (flag)
            ++count;
    }
    cout << count << '\n';
}
