#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int diff = abs('A' - 'a');
    s[k - 1] = s[k - 1] + diff;
    cout << s << '\n';
}

