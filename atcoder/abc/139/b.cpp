#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int num_of_socket = 1;
    int num_of_tap = 0;
    while (num_of_socket < b) {
        --num_of_socket;
        num_of_socket += a;
        ++num_of_tap;
    }
    cout << num_of_tap << '\n';
}

