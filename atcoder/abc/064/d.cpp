#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    int open_paren = 0;
    stack<char> s;
    for (int i = 0; i < n; ++i) {
        switch (str[i]) {
            case '(':
                s.push(str[i]);
                break;
            case ')':
                if (s.empty())
                    ++open_paren;
                else
                    s.pop();
                break;
        }
    }

    for (int i = 0; i < open_paren; ++i)
        cout << '(';
    cout << str;

    while (!s.empty()) {
        cout << ')';
        s.pop();
    }
    cout << '\n';
}

