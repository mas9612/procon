#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Heap {
    vector<long> heap;
    long size;
    long last_idx;

    Heap(long n) : size(n), last_idx(0) { heap.reserve(n); }
    long parent(long i) { return i / 2; }
    long left(long i) { return i * 2; }
    long right(long i) { return i * 2 + 1; }

    void max_heapify(long index) {
        long left_idx = left(index);
        long right_idx = right(index);

        long max_idx = index;
        if (left_idx <= last_idx && heap[max_idx] < heap[left_idx])
            max_idx = left_idx;
        if (right_idx <= last_idx && heap[max_idx] < heap[right_idx])
            max_idx = right_idx;

        if (max_idx != index) {
            swap(heap[index], heap[max_idx]);
            max_heapify(max_idx);
        }
    }

    void insert(long key) {
        ++last_idx;
        heap[last_idx] = key;

        long index = last_idx;
        // don't need to heapify when add the first key
        while (index > 1 && heap[parent(index)] < heap[index]) {
            swap(heap[parent(index)], heap[index]);
            index = parent(index);
        }
    }

    long extract_max() {
        long ret = heap[1];
        heap[1] = heap[last_idx];
        --last_idx;
        max_heapify(1);
        return ret;
    }
};

int main() {
    ios::sync_with_stdio(false);

    const long inst_max = 2000000;
    Heap heap(inst_max + 1);

    string inst;
    while (true) {
        cin >> inst;
        if (inst == "end") {
            break;
        } else if (inst == "insert") {
            long key;
            cin >> key;
            heap.insert(key);
        } else {
            cout << heap.extract_max() << '\n';
        }
    }
}

