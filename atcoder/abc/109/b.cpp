#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; ++i)
        cin >> words[i];

    bool success = true;
    map<string, int> m;
    m.insert(make_pair(words[0], 1));
    char last_char = words[0][words[0].length() - 1];
    for (int i = 1; i < n; ++i) {
        if (m.find(words[i]) != m.end() || words[i][0] != last_char) {
            success = false;
            break;
        }
        m.insert(make_pair(words[i], 1));
        last_char = words[i][words[i].length() - 1];
    }

    if (success)
        cout << "Yes\n";
    else
        cout << "No\n";
}
