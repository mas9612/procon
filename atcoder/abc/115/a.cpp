#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;

    cout << "Christmas";
    const int christmas = 25;
    int eve_count = christmas - d;
    for (int i = 0; i < eve_count; ++i)
        cout << " Eve";
    cout << '\n';
}
