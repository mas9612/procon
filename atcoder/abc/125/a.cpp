#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;

    cout << floor((t + 0.5) / a) * b << '\n';
}
