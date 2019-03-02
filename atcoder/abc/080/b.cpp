#include <iostream>

using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    if (n % sum_of_digits(n) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}
