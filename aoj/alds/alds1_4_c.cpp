#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, bool> m;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string op, value;
        cin >> op >> value;

        if (op == "insert") {
            m.insert(make_pair(value, true));
        } else {
            decltype(m)::iterator itr = m.find(value);
            if (itr != m.end())
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
}

