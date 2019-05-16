#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    const int mapsize = 26;
    vector<bool> charmap(mapsize, false);
    for (int i = 0; i < s.length(); ++i)
        charmap[s[i] - 'a'] = true;

    for (int i = 0; i < mapsize; ++i) {
        if (!charmap[i]) {
            cout << char('a' + i) << '\n';
            return 0;
        }
    }
    cout << "None\n";
}

