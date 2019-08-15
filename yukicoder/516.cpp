#include <iostream>
#include <string>

using namespace std;

int main() {
    int red = 0;
    int blue = 0;

    for (int i = 0; i < 3; ++i) {
        string s;
        cin >> s;

        if (s == "RED")
            ++red;
        else
            ++blue;
    }

    if (red > blue)
        cout << "RED\n";
    else
        cout << "BLUE\n";
}

