#include <iostream>
#include <map>
#include <string>

using namespace std;

bool check(string s1, string s2) {
    map<char, char> check_s1;
    for (int i = 0; i < s1.length(); ++i) {
        decltype(check_s1)::iterator itr = check_s1.find(s1[i]);
        if (itr != check_s1.end()) {
            if (check_s1[s1[i]] != s2[i])
                return false;
        } else {
            check_s1[s1[i]] = s2[i];
        }
    }

    map<char, char> check_s2;
    for (int i = 0; i < s2.length(); ++i) {
        decltype(check_s2)::iterator itr = check_s2.find(s2[i]);
        if (itr != check_s2.end()) {
            if (check_s2[s2[i]] != s1[i])
                return false;
        } else {
            check_s2[s2[i]] = s1[i];
        }
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    if (check(s, t))
        cout << "Yes\n";
    else
        cout << "No\n";
}

