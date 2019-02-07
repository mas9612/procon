#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<char> s;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        s.insert(c);
    }

    if (s.size() < 4)
        cout << "Three\n";
    else
        cout << "Four\n";
}
