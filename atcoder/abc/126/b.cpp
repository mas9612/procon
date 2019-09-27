#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n1 = stoi(s.substr(0, 2));
    int n2 = stoi(s.substr(2, 4));

    bool yymm = false, mmyy = false;
    if (n2 > 0 && n2 <= 12)
        yymm = true;
    if (n1 > 0 && n1 <= 12)
        mmyy = true;

    if (yymm && mmyy)
        cout << "AMBIGUOUS\n";
    else if (yymm)
        cout << "YYMM\n";
    else if (mmyy)
        cout << "MMYY\n";
    else
        cout << "NA\n";
}

