#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    string s;
    cin >> s;

    if (a >= 3200)
        cout << s << '\n';
    else
        cout << "red\n";
}

