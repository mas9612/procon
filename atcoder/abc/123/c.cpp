#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    vector<long long> v(6);
    for (int i = 0; i < 6; ++i)
        cin >> v[i];

    long long min_n = v[1];
    for (int i = 2; i < 6; ++i)
        min_n = min(min_n, v[i]);

    long long time = (v[0] + min_n - 1) / min_n + 4;
    cout << time << '\n';
}

