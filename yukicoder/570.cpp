#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b);

int main() {
    vector<pair<int, int>> v(3);
    for (int i = 0; i < 3; ++i) {
        int height;
        cin >> height;
        v[i] = make_pair(i, height);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < 3; ++i)
        cout << char('A' + v[i].first) << '\n';
}

bool compare(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second;
}

