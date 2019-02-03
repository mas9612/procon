#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    const int ramen = 700;
    int topping = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'o')
            ++topping;
    }
    cout << ramen + topping * 100 << '\n';
}
