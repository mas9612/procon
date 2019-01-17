#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    const int INF = INT_MAX;
    vector<vector<int>> happiness(n, vector<int>(3, INF));

    const int SEA = 0;
    const int MOUNTAIN = 1;
    const int HOME = 2;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        if (i == 0) {
            happiness[i][SEA] = a;
            happiness[i][MOUNTAIN] = b;
            happiness[i][HOME] = c;
        } else {
            happiness[i][SEA] =
                max(happiness[i - 1][MOUNTAIN] + a, happiness[i - 1][HOME] + a);
            happiness[i][MOUNTAIN] =
                max(happiness[i - 1][SEA] + b, happiness[i - 1][HOME] + b);
            happiness[i][HOME] =
                max(happiness[i - 1][SEA] + c, happiness[i - 1][MOUNTAIN] + c);
        }
    }

    int max_happiness = happiness[n - 1][SEA];
    max_happiness = max(max_happiness, happiness[n - 1][MOUNTAIN]);
    max_happiness = max(max_happiness, happiness[n - 1][HOME]);
    cout << max_happiness << '\n';
}
