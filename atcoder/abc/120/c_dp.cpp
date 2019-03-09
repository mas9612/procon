#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int length = s.length();
    vector<int> dp(length, 0);
    stack<int> remain;

    int remove_count = 0;
    for (int i = 0; i < length; ++i) {
        if (remain.empty()) {
            remain.push(s[i]);
            continue;
        }

        char previous = remain.top();
        char current = s[i];
        if (previous != current) {
            remove_count += 2;
            remain.pop();
        } else {
            remain.push(s[i]);
        }
    }

    cout << remove_count << '\n';
}
