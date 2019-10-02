#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int xx = x2 - x1;
    int yy = y2 - y1;

    int x3 = x2 - yy;
    int y3 = y2 + xx;
    int x4 = x1 - yy;
    int y4 = y1 + xx;
    cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << '\n';
}

