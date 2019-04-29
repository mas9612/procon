#include <cctype>
#include <iostream>

using namespace std;

int todigit(char c) {
    int n;
    if (isdigit(c) == 0)
        n = c - 'A' + 10;
    else
        n = c;
    return n;
}

int main() {
    char x, y;
    cin >> x >> y;

    int xx, yy;
    xx = todigit(x);
    yy = todigit(y);

    if (xx > yy)
        cout << ">\n";
    else if (xx < yy)
        cout << "<\n";
    else
        cout << "=\n";
}
