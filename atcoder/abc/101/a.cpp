#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int num = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+')
            ++num;
        else
            --num;
    }
    cout << num << '\n';
}
