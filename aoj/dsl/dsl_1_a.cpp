#include <iostream>
#include <vector>

using namespace std;

class DisjointSet {
   public:
    vector<int> parent;
    vector<int> height;

    DisjointSet(int n) {
        for (int i = 0; i < n; ++i) {
            parent.push_back(i);
            height.push_back(0);
        }
    }

    int find_set(int n) {
        if (n == parent[n])
            return n;
        else
            return find_set(parent[n]);
    }

    void unite(int x, int y) {
        int rep1 = find_set(x);
        int rep2 = find_set(y);

        if (height[rep1] > height[rep2]) {
            parent[rep2] = rep1;
        } else {
            parent[rep1] = rep2;
            if (height[rep1] == height[rep2])
                ++height[rep1];
        }
    }

    bool same(int x, int y) {
        if (find_set(x) == find_set(y))
            return true;
        else
            return false;
    }
};

int main() {
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    DisjointSet d(n);
    int com, x, y;
    for (int i = 0; i < q; ++i) {
        cin >> com >> x >> y;
        switch (com) {
            case 0:  // unite
                d.unite(x, y);
                break;
            case 1:  // same
                if (d.same(x, y))
                    cout << 1 << '\n';
                else
                    cout << 0 << '\n';
                break;
        }
    }
}

