#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lcs(string s1, string s2) {
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    vector<vector<int>> v(s1.length(), vector<int>(s2.length(), 0));

    for (int i = 1; i < s1.length(); ++i) {
        for (int j = 1; j < s2.length(); ++j) {
            if (s1[i] == s2[j])
                v[i][j] = v[i - 1][j - 1] + 1;
            else
                v[i][j] = max(v[i - 1][j], v[i][j - 1]);
        }
    }

    return v[s1.length() - 1][s2.length() - 1];
}

int main() {
    int n;
    cin >> n;

    string s1, s2;
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << '\n';
    }
}

