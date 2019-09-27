#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < d; ++j) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int tmp = 0;
            for (int k = 0; k < d; ++k)
                tmp += (v[j][k] - v[i][k]) * (v[j][k] - v[i][k]);

            double dist = sqrt(tmp);
            if (dist == floor(dist))
                ++count;
        }
    }
    cout << count << '\n';
}

