#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    const int cost_max = 1000;
    int min_cost = cost_max + 1;
    for (int i = 0; i < N; ++i) {
        int c, t;
        cin >> c >> t;
        if (t <= T && min_cost > c)
            min_cost = c;
    }

    if (min_cost <= cost_max)
        cout << min_cost << '\n';
    else
        cout << "TLE\n";
}
