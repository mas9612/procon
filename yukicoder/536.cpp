#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.substr(s.length() - 2, 2) == "ai")
        cout << s.substr(0, s.length() - 2) << "AI\n";
    else
        cout << s << "-AI\n";
}

