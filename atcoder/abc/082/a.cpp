#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    double ave = (a + b) / 2.0;
    cout << ceil(ave) << '\n';
}
