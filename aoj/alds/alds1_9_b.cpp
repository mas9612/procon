#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void max_heapify(vector<int>& H, int i, int size)
{
    int left = i * 2;
    int right = i * 2 + 1;

    int max = i;
    if (left <= size && H[max] < H[left])
        max = left;
    if (right <= size && H[max] < H[right])
        max = right;

    if (max != i) {
        swap(H[max], H[i]);
        max_heapify(H, max, size);
    }
}

void build_max_heap(vector<int>& H, int size)
{
    for (int i = size / 2; i > 0; --i)
        max_heapify(H, i, size);
}

int main()
{
    int size;
    cin >> size;

    vector<int> H(size+1);
    for (int i = 1; i <= size; ++i)
        cin >> H[i];

    build_max_heap(H, size);

    for (int i = 1; i <= size; ++i)
        cout << ' ' << H[i];
    cout << '\n';
}

