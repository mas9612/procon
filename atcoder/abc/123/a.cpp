#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int size = 5;
    vector<int> antennas(size);
    for (int i = 0; i < size; ++i)
        cin >> antennas[i];

    int k;
    cin >> k;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (abs(antennas[i] - antennas[j]) > k) {
                cout << ":(\n";
                return 0;
            }
        }
    }
    cout << "Yay!\n";
}
