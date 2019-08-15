#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');

    int after_min = m + 5;
    h = (h + after_min / 60) % 24;
    m = after_min % 60;
    cout << setw(2) << setfill('0') << h << ':';
    cout << setw(2) << setfill('0') << m << '\n';
}

