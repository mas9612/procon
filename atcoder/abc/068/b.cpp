#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_count = 0;
    int max_num = 1;
    for (int i = 1; i <= n; ++i) {
        int count = 0;
        int ii = i;
        while (ii > 0 && ii % 2 == 0) {
            ++count;
            ii >>= 1;
        }

        if (max_count < count) {
            max_num = i;
            max_count = count;
        }
    }
    cout << max_num << '\n';
}

