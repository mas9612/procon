#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];

    int recover = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j)
            recover += d[i] * d[j];
    }

    cout << recover << '\n';
}

