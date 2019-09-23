#include <iostream>
#include <string>

using namespace std;

struct Node {
    long key;
    Node* parent;
    Node* left;
    Node* right;

    Node() : key(0), parent(NULL), left(NULL), right(NULL) {}
};

void insert(Node** root, int key) {
    Node* new_node = new Node;
    new_node->key = key;

    if (*root == NULL) {
        *root = new_node;
    } else {
        Node* node1 = *root;
        Node* node2;
        while (node1 != NULL) {
            node2 = node1;
            if (node1->key > key)
                node1 = node1->left;
            else
                node1 = node1->right;
        }

        new_node->parent = node2;
        if (node2->key > new_node->key)
            node2->left = new_node;
        else
            node2->right = new_node;
    }
}

Node* find(Node* root, int key) {
    Node* node = root;
    while (node != NULL) {
        if (node->key == key)
            break;
        if (node->key > key)
            node = node->left;
        else
            node = node->right;
    }

    return node;
}

Node* minimum(Node* node) {
    Node* node1 = node;
    Node* node2;
    while (node1 != NULL) {
        node2 = node1;
        node1 = node1->left;
    }
    return node2;
}

Node* successor(Node* node) {
    if (node->right != NULL) {
        return minimum(node->right);
    } else {
        Node* node1 = node->parent;
        Node* node2 = node;
        while (node1 != NULL && node1->right == node2) {
            node2 = node1;
            node1 = node1->parent;
        }
        return node1;
    }
}

void _delete_node(Node* node) {
    if (node->left == NULL && node->right == NULL) {
        Node* parent = node->parent;
        if (parent->left == node)
            parent->left = NULL;
        else
            parent->right = NULL;
        delete node;
    } else if (node->left != NULL && node->right != NULL) {
        Node* successor_node = successor(node);
        node->key = successor_node->key;
        _delete_node(successor_node);
    } else {
        Node* child;
        if (node->left != NULL) {
            node->left->parent = node->parent;
            child = node->left;
        } else {
            node->right->parent = node->parent;
            child = node->right;
        }

        if (node->parent->left == node)
            node->parent->left = child;
        else
            node->parent->right = child;
        delete node;
    }
}

void delete_node(Node** root, int key) {
    Node* node = find(*root, key);
    if (node == NULL)
        return;

    _delete_node(node);
}

void print_inorder(Node* node) {
    if (node == NULL)
        return;

    print_inorder(node->left);
    cout << ' ' << node->key;
    print_inorder(node->right);
}

void print_preorder(Node* node) {
    if (node == NULL)
        return;

    cout << ' ' << node->key;
    print_preorder(node->left);
    print_preorder(node->right);
}

void delete_tree(Node* node) {
    if (node->left != NULL)
        delete_tree(node->left);
    if (node->right != NULL)
        delete_tree(node->right);
    if (node != NULL)
        delete node;
}

int main() {
    int n;
    cin >> n;

    Node* root = NULL;

    for (int i = 0; i < n; ++i) {
        string inst;
        cin >> inst;

        if (inst == "insert") {
            int k;
            cin >> k;
            insert(&root, k);
        } else if (inst == "find") {
            int k;
            cin >> k;
            Node* node = find(root, k);
            if (node != NULL)
                cout << "yes\n";
            else
                cout << "no\n";
        } else if (inst == "delete") {
            int k;
            cin >> k;
            delete_node(&root, k);
        } else {
            print_inorder(root);
            cout << '\n';
            print_preorder(root);
            cout << '\n';
        }
    }

    delete_tree(root);
}

