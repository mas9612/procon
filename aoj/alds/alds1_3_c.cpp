#include <iostream>
#include <string>

using namespace std;

class Node {
   public:
    Node* next;
    Node* prev;
    long long value;

    Node() : next(NULL), prev(NULL), value(0) {}
};

void delete_first(Node** head, Node** last) {
    Node* tmp = *head;
    *head = tmp->next;
    delete tmp;

    if (*head != NULL) {
        (*head)->prev = NULL;
        if (*head == *last)
            (*last)->prev = NULL;
    } else  // list is empty
        *last = NULL;
}

void delete_last(Node** head, Node** last) {
    Node* node = *last;
    if (node != NULL) {
        *last = node->prev;
        if (*last != NULL) {
            (*last)->next = NULL;
        } else {
            *head = NULL;
        }
        delete node;
    }
}

void insert_node(Node** head, Node** last, long long value) {
    Node* new_node = new Node;
    new_node->value = value;

    if (*head == NULL) {
        *head = new_node;
        *last = new_node;
    } else {
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
    }
}

void delete_node(Node** head, Node** last, long long value) {
    Node* node = *head;
    while (node != NULL) {
        if (node->value == value)
            break;
        node = node->next;
    }

    if (node != NULL) {
        if (node->prev == NULL && node->next != NULL) {
            // I don't need to delete node here since delete_first does
            delete_first(head, last);
        } else if (node->next == NULL && node->prev != NULL) {
            // I don't need to delete node here since delete_last does
            delete_last(head, last);
        } else {
            if (node->prev == NULL && node->next == NULL) {
                *head = NULL;
                *last = NULL;
            } else {
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }
            delete node;
        }
    }
}

void print_list(Node* head) {
    Node* node = head;
    if (node != NULL) {
        cout << node->value;
        node = node->next;
    }
    while (node != NULL) {
        cout << ' ' << node->value;
        node = node->next;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    Node* head = NULL;
    Node* last = NULL;

    for (int i = 0; i < n; ++i) {
        string op;
        cin >> op;
        long long value;

        if (op == "insert") {
            cin >> value;
            insert_node(&head, &last, value);
        } else if (op == "delete") {
            cin >> value;
            delete_node(&head, &last, value);
        } else if (op == "deleteFirst") {
            delete_first(&head, &last);
        } else {
            delete_last(&head, &last);
        }
    }

    print_list(head);

    Node* prev;
    while (head != NULL) {
        prev = head;
        head = head->next;
        delete prev;
    }
}

