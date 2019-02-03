#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// compare function to sort vector<pair<int, int>> in descending order
bool compare(const pair<int, int>& p1, const pair<int, int>& p2) {
    return p1.second > p2.second;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    const int MAX = 10e5 + 1;
    vector<pair<int, int>> a(MAX), b(MAX);
    for (int i = 0; i < MAX; ++i) {
        a[i] = make_pair(i, 0);
        b[i] = make_pair(i, 0);
    }

    for (int i = 0; i < n - 1; i += 2) {
        ++a[v[i]].second;
        ++b[v[i + 1]].second;
    }

    sort(a.begin(), a.end(), compare);
    sort(b.begin(), b.end(), compare);

    int count;
    int half = n / 2;
    if (a[0].first != b[0].first) {
        count = half - a[0].second;
        count += half - b[0].second;
    } else {
        int c1 = half - a[0].second;
        c1 += half - b[1].second;
        int c2 = half - a[1].second;
        c2 += half - b[0].second;
        count = min(c1, c2);
    }
    cout << count << '\n';
}
