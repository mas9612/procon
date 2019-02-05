#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> s(3);
    for (int i = 0; i < 3; ++i)
        cin >> s[i];

    for (int i = 0; i < 3; ++i)
        cout << s[i][i];
    cout << '\n';
}
