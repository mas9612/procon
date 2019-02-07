#include <iostream>

using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    int b_count = (x - a) / b;
    int remain = x - a - b_count * b;
    cout << remain << '\n';
}
