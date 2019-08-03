#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s("285714");
    cout << s[n % 6 - 1] << '\n';
}

