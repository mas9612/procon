#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = n / 3;
    n -= count * 3;
    cout << count << '\n';
}
