#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int parent;
    int left;
    int right;

    Node() : parent(-1), left(-1), right(-1) {}
};

void print_preorder(vector<Node>& tree, int index) {
    if (index == -1)
        return;

    cout << ' ' << index;
    print_preorder(tree, tree[index].left);
    print_preorder(tree, tree[index].right);
}

void print_inorder(vector<Node>& tree, int index) {
    if (index == -1)
        return;

    print_inorder(tree, tree[index].left);
    cout << ' ' << index;
    print_inorder(tree, tree[index].right);
}

void print_postorder(vector<Node>& tree, int index) {
    if (index == -1)
        return;

    print_postorder(tree, tree[index].left);
    print_postorder(tree, tree[index].right);
    cout << ' ' << index;
}

int find_root(vector<Node>& tree) {
    int root = -1;
    for (int i = 0; i < tree.size(); ++i) {
        if (tree[i].parent == -1) {
            root = i;
            break;
        }
    }
    return root;
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

    int root = find_root(tree);

    cout << "Preorder\n";
    print_preorder(tree, root);
    cout << '\n';

    cout << "Inorder\n";
    print_inorder(tree, root);
    cout << '\n';

    cout << "Postorder\n";
    print_postorder(tree, root);
    cout << '\n';
}

