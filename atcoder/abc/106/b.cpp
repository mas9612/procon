#include <iostream>

using namespace std;

int num_of_divisor(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
            ++count;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int result = 0;
    for (int i = 1; i <= n; i += 2) {
        if (num_of_divisor(i) == 8)
            ++result;
    }
    cout << result << '\n';
}
