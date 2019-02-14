#include <iostream>

using namespace std;

int sum_of_digit(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int tmp = sum_of_digit(i);
        if (tmp >= a && tmp <= b)
            sum += i;
    }
    cout << sum << '\n';
}
