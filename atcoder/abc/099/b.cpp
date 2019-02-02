#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int num_of_towers = 999;
    vector<int> towers(num_of_towers);
    towers[0] = 1;
    for (int i = 1; i < num_of_towers; ++i)
        towers[i] = towers[i - 1] + (i + 1);

    int a, b;
    cin >> a >> b;

    int diff = b - a;
    int real_height = towers[diff - 1];
    cout << real_height - b << '\n';
}
