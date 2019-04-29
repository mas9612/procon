#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        int t;
        cin >> t;
        v[i] = t - (i + 1);
    }

    sort(v.begin(), v.end());

    int median = v[N / 2];
    long result = 0;
    for (int i = 0; i < N; ++i)
        result += abs(v[i] - median);
    cout << result << '\n';
}
