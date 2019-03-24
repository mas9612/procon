#include <iostream>

using namespace std;

int main() {
    char b;
    cin >> b;

    switch (b) {
        case 'A':
            cout << "T\n";
            break;
        case 'C':
            cout << "G\n";
            break;
        case 'G':
            cout << "C\n";
            break;
        case 'T':
            cout << "A\n";
            break;
    }
}
