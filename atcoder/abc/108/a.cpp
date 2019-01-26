#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int num_of_even = 0;
    int num_of_odd = 0;
    for (int i = 1; i <= k; ++i) {
        if (i % 2 == 0)
            ++num_of_even;
        else
            ++num_of_odd;
    }
    cout << num_of_even * num_of_odd << '\n';
}
