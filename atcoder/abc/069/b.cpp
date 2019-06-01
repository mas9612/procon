#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length() - 2;
    cout << s[0] << len << s[s.length() - 1] << '\n';
}

