#include <iostream>

using namespace std;

bool is_uneven(int n) {
    int digits = 0;
    while (n > 0) {
        ++digits;
        n /= 10;
    }
    return digits % 2 == 1;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (is_uneven(i))
            ++count;
    }
    cout << count << '\n';
}

