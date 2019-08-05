#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.find("575") != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
}

