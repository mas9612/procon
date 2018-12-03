#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(string position, int index, vector<int>& H, int size)
{
    if (index > 0 && index <= size)
        cout << position << " key = " << H[index] << ", ";
}

int main()
{
    int size;
    cin >> size;

    vector<int> H(size+1);
    for (int i = 1; i <= size; ++i)
        cin >> H[i];

    for (int i = 1; i <= size; ++i) {
        int parent = i / 2;
        int left = i * 2;
        int right = i * 2 + 1;

        cout << "node " << i << ": key = " << H[i] << ", ";
        print("parent", parent, H, size);
        print("left", left, H, size);
        print("right", right, H, size);
        cout << '\n';
    }
}

