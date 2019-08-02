#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if ((s1 == "Sat" || s1 == "Sun") && (s2 != "Sat" && s2 != "Sun"))
        cout << "8/32\n";
    else if ((s1 == "Sat" || s1 == "Sun") && (s2 == "Sat" || s2 == "Sun"))
        cout << "8/33\n";
    else
        cout << "8/31\n";
}

