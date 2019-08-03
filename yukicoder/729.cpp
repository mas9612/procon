#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    string s;
    cin >> s;

    int i, j;
    cin >> i >> j;

    swap(s[i], s[j]);
    cout << s << '\n';
}

