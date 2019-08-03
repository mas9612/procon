#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string treeone("treeone");
    for (int i = 0; i < s.length();) {
        if ((s[i] == 't') && (s.substr(i, treeone.length()) == treeone)) {
            cout << "forest";
            i += treeone.length();
        } else {
            cout << s[i];
            ++i;
        }
    }
    cout << '\n';
}

