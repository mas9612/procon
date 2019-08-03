#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> v(t);
    for (int i = 0; i < t; ++i)
        cin >> v[i];

    if (abs(v[0] - 0) != 1) {
        cout << "F\n";
        return 0;
    }
    for (int i = 1; i < t; ++i) {
        if (abs(v[i] - v[i - 1]) != 1) {
            cout << "F\n";
            return 0;
        }
    }
    cout << "T\n";
}

