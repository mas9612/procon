#include <iostream>
#include <string>

using namespace std;

bool valid_postal_code(string s, int a, int b) {
    if (s[a] != '-')
        return false;

    for (int i = 0; i < a; ++i) {
        if (isdigit(s[i]) == 0)
            return false;
    }
    for (int i = 0; i < b; ++i) {
        int idx = a + 1 + i;
        if (isdigit(s[idx]) == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    if (valid_postal_code(s, a, b))
        cout << "Yes\n";
    else
        cout << "No\n";
}
