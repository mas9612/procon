#include <iostream>
#include <map>

using namespace std;

int main() {
    int p1, p2, n;
    cin >> p1 >> p2 >> n;

    int loss = 0;
    map<int, bool> m;
    for (int i = 0; i < n; ++i) {
        int r;
        cin >> r;

        if (m.find(r) != m.end())
            loss += p1 + p2;

        m.insert(make_pair(r, true));
    }

    cout << loss << '\n';
}

