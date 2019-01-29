#include <cmath>
#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num > 0 && num <= 2)
        return true;

    if (num % 2 == 0)
        return false;

    float limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int num_of_prime = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (is_prime(num))
            ++num_of_prime;
    }
    cout << num_of_prime << '\n';
}
