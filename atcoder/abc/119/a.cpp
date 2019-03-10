#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    stringstream ss(s);
    string buf;
    vector<string> v;
    while (getline(ss, buf, '/'))
        v.push_back(buf);

    int mon = stoi(v[1]);
    if (mon < 5)
        cout << "Heisei\n";
    else
        cout << "TBD\n";
}
