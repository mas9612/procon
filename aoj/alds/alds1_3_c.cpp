#include <iostream>
#include <string>

using namespace std;

struct Node {
    int value;
    Node* next;
    Node* prev;
};

Node* init_list() {
    Node* node = new Node;
    node->next = node;
    node->prev = node;
    return node;
}

void insert_node(Node* head, int value) {
    Node* new_node = new Node;
    new_node->value = value;

    Node* node = head->next;
    head->next = new_node;
    new_node->prev = head;
    new_node->next = node;
    node->prev = new_node;
}

void delete_node(Node* head, int value) {
    Node* node = head->next;
    while (node != head) {
        if (node->value == value)
            break;
        node = node->next;
    }

    if (node != head) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
}

void delete_first(Node* head) {
    Node* node = head->next;
    if (node != head) {
        head->next = node->next;
        node->next->prev = head;
        delete node;
    }
}

void delete_last(Node* head) {
    Node* node = head->prev;
    if (node != head) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        delete node;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    Node* head = init_list();

    for (int i = 0; i < n; ++i) {
        string cmd;
        cin >> cmd;

        int value;
        if (cmd == "insert") {
            cin >> value;
            insert_node(head, value);
        } else if (cmd == "delete") {
            cin >> value;
            delete_node(head, value);
        } else if (cmd == "deleteFirst") {
            delete_first(head);
        } else {
            delete_last(head);
        }
    }

    Node* node = head->next;
    if (node != head)
        cout << node->value;
    node = node->next;
    while (node != head) {
        cout << ' ' << node->value;
        node = node->next;
    }
    cout << '\n';

    Node* tmp;
    node = head->next;
    while (node != head) {
        tmp = node;
        node = node->next;
        delete tmp;
    }
    delete head;
}

