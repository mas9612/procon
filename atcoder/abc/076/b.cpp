#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int num = 1;
    for (int i = 0; i < n; ++i) {
        int v1 = num * 2;
        int v2 = num + k;
        if (v1 < v2)
            num = v1;
        else
            num = v2;
    }
    cout << num << '\n';
}

