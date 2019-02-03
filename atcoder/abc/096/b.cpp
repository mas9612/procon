#include <iostream>

using namespace std;

int max_index(int n[], int size) {
    int idx = 0;
    for (int i = 0; i < size; ++i) {
        if (n[idx] < n[i])
            idx = i;
    }
    return idx;
}

int main() {
    int n[3];
    for (int i = 0; i < 3; ++i)
        cin >> n[i];
    int k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        int m = max_index(n, 3);
        n[m] *= 2;
    }

    int sum = 0;
    for (int i = 0; i < 3; ++i)
        sum += n[i];
    cout << sum << '\n';
}
