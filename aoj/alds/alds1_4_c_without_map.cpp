#include <iostream>
#include <string>

using namespace std;

class Element {
   public:
    string value;
    Element* left;
    Element* right;

    Element() : value(""), left(NULL), right(NULL) {}
};

void insert(Element* dict, string s) {
    if (dict == NULL) {
        dict = new Element;
        dict->value = s;
    } else {
        Element* new_elem = new Element;
        new_elem->value = s;

        Element* elem = dict;
        while (true) {
            if (elem->value > s) {
                if (elem->left == NULL) {
                    elem->left = new_elem;
                    break;
                }
                elem = elem->left;
            } else {
                if (elem->right == NULL) {
                    elem->right = new_elem;
                    break;
                }
                elem = elem->right;
            }
        }
    }
}

void delete_dict(Element* dict) {
    if (dict == NULL)
        return;

    delete_dict(dict->left);
    delete_dict(dict->right);
    delete dict;
}

Element* find(Element* dict, string s) {
    Element* elem = dict;
    while (true) {
        if (elem == NULL)
            break;

        if (elem->value == s)
            return elem;
        else if (elem->value > s)
            elem = elem->left;
        else
            elem = elem->right;
    }
    return NULL;
}

int main() {
    ios::sync_with_stdio(false);

    Element* dict = new Element;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string op, value;
        cin >> op >> value;

        if (op == "insert") {
            insert(dict, value);
        } else {
            Element* e = find(dict, value);
            if (e != NULL)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }

    delete_dict(dict);
}

