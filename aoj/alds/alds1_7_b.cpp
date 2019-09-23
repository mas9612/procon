#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int parent;
    int left;
    int right;
    int depth;
    int height;

    Node() : parent(-1), left(-1), right(-1) {}
};

int calculate_depth(vector<Node>& tree, int index) {
    int depth = 0;
    while (tree[index].parent != -1) {
        index = tree[index].parent;
        ++depth;
    }
    return depth;
}

int _calculate_height(vector<Node>& tree, int index) {
    int left_height = 0;
    int right_height = 0;

    if (tree[index].left != -1)
        left_height = _calculate_height(tree, tree[index].left) + 1;
    if (tree[index].right != -1)
        right_height = _calculate_height(tree, tree[index].right) + 1;
    return max(left_height, right_height);
}

int calculate_height(vector<Node>& tree, int index) {
    return _calculate_height(tree, index);
}

int main() {
    int n;
    cin >> n;

    vector<Node> tree(n);
    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        cin >> tree[id].left >> tree[id].right;
        tree[tree[id].left].parent = id;
        tree[tree[id].right].parent = id;
    }

    for (int i = 0; i < n; ++i) {
        tree[i].depth = calculate_depth(tree, i);
        tree[i].height = calculate_height(tree, i);

        cout << "node " << i << ": parent = " << tree[i].parent
             << ", sibling = ";
        int parent = tree[i].parent;
        if (parent == -1)
            cout << -1;
        else if (tree[parent].left == i)
            cout << tree[parent].right;
        else
            cout << tree[parent].left;

        cout << ", degree = ";
        int degree = 0;
        if (tree[i].left != -1)
            ++degree;
        if (tree[i].right != -1)
            ++degree;
        cout << degree;

        cout << ", depth = " << tree[i].depth << ", height = " << tree[i].height
             << ", ";

        if (parent == -1)
            cout << "root\n";
        else if (degree == 0)
            cout << "leaf\n";
        else
            cout << "internal node\n";
    }
}

