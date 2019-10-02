#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    while (n != 0) {
        int d = abs(n % 2);
        v.push_back(d);
        n = (n - d) / -2;
    }

    if (v.size() == 0) {
        cout << 0 << '\n';
    } else {
        for (int i = v.size() - 1; i >= 0; --i)
            cout << v[i];
        cout << '\n';
    }
}

