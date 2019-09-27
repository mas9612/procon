#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

bool compare(tuple<int, string, int>& a, tuple<int, string, int>& b) {
    if (get<1>(a) != get<1>(b))
        return get<1>(a) < get<1>(b);
    else
        return get<2>(a) > get<2>(b);
}

int main() {
    int n;
    cin >> n;

    vector<tuple<int, string, int>> v(n);
    for (int i = 0; i < n; ++i) {
        string s;
        int p;
        cin >> s >> p;
        v[i] = make_tuple(i, s, p);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; ++i)
        cout << get<0>(v[i]) + 1 << '\n';
}

