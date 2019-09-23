#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int parent;
    int children;
    int siblings;
    int depth;

    Node() : parent(-1), children(-1), siblings(-1) {}
};

int _calculate_depth(vector<Node>& tree, int index) {
    int depth = 0;
    while (tree[index].parent != -1) {
        index = tree[index].parent;
        ++depth;
    }
    return depth;
}

void calculate_depth(vector<Node>& tree) {
    for (int i = 0; i < tree.size(); ++i)
        tree[i].depth = _calculate_depth(tree, i);
}

int main() {
    int n;
    cin >> n;

    vector<Node> tree(n);
    for (int i = 0; i < n; ++i) {
        int id, k;
        cin >> id >> k;

        int child_id, prev;
        for (int j = 0; j < k; ++j) {
            cin >> child_id;

            if (j == 0)
                tree[id].children = child_id;
            else
                tree[prev].siblings = child_id;
            prev = child_id;

            tree[child_id].parent = id;
        }
    }

    calculate_depth(tree);

    for (int i = 0; i < n; ++i) {
        cout << "node " << i << ": parent = " << tree[i].parent
             << ", depth = " << tree[i].depth << ", ";

        if (tree[i].parent == -1)
            cout << "root, [";
        else if (tree[i].children == -1)
            cout << "leaf, [";
        else
            cout << "internal node, [";

        int idx = tree[i].children;
        for (int j = 0; idx != -1; ++j) {
            if (j != 0)
                cout << ", ";
            cout << idx;
            idx = tree[idx].siblings;
        }

        cout << "]\n";
    }
}

