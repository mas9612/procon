#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

bool sort_by_second(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v[i] = make_pair(i, a);
    }

    sort(v.begin(), v.end(), sort_by_second);

    cout << v[0].first + 1;
    for (int i = 1; i < n; ++i)
        cout << ' ' << v[i].first + 1;
    cout << '\n';
}

