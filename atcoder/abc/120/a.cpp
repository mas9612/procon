#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int can = b / a;
    cout << min(can, c) << '\n';
}
