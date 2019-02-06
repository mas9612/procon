#include <iostream>
#include <utility>
#include <vector>

using namespace std;

struct Process {
    string name;
    int time;

    Process() : name(""), time(0) {}
};

class Queue {
   public:
    vector<Process*> q;
    int capacity;
    int begin;
    int end;
    int size;

    Queue(int cap) : q(cap, NULL), capacity(cap), begin(0), end(0), size(0) {}

    void enqueue(Process* p) {
        if (size + 1 <= capacity) {
            q[end] = p;
            ++end;
            end = end % capacity;
            ++size;
        }
    }

    Process* dequeue() {
        if (!empty()) {
            Process* p = q[begin];
            ++begin;
            begin = begin % capacity;
            --size;
            return p;
        } else {
            return NULL;
        }
    }

    bool empty() {
        if (size <= 0)
            return true;
        else
            return false;
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<Process*> ps(N);
    Queue q(N);
    for (int i = 0; i < N; ++i) {
        Process* p = new Process;
        cin >> p->name >> p->time;
        q.enqueue(p);
        ps[i] = p;
    }

    int current = 0;
    while (!q.empty()) {
        Process* p = q.dequeue();
        if (p->time <= Q) {
            current += p->time;
            cout << p->name << ' ' << current << '\n';
        } else {
            p->time -= Q;
            current += Q;
            q.enqueue(p);
        }
    }

    for (int i = 0; i < N; ++i)
        delete ps[i];
}

