#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num_of_odd = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1)
            ++num_of_odd;
    }

    cout << double(num_of_odd) / (double)n << '\n';
}

