#include <iostream>

using namespace std;

int main() {
    int h, n;
    cin >> h >> n;

    int higher = 0;
    for (int i = 0; i < n - 1; ++i) {
        int height;
        cin >> height;

        if (height > h)
            ++higher;
    }

    int rank = higher + 1;
    cout << rank;
    int end = rank % 10;
    switch (end) {
        case 1:
            cout << "st\n";
            break;
        case 2:
            cout << "nd\n";
            break;
        case 3:
            cout << "rd\n";
            break;
        default:
            cout << "th\n";
            break;
    }
}

