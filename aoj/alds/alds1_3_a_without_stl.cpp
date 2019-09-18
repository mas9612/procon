#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

class Stack {
    int array[100];
    int top_idx;

   public:
    Stack() { top_idx = -1; }
    int top() { return array[top_idx]; }
    void push(int n) {
        ++top_idx;
        array[top_idx] = n;
    }
    void pop() { --top_idx; }
};

int main() {
    Stack stack;

    string s;
    getline(cin, s);

    stringstream ss(s);
    string buf;
    int n, n1, n2;
    while (getline(ss, buf, ' ')) {
        switch (buf[0]) {
            case '+':  // fallthrough
            case '-':  // fallthrough
            case '*':
                // stack is LIFO, so we need to store value to n2 first.
                n2 = stack.top();
                stack.pop();
                n1 = stack.top();
                stack.pop();

                switch (buf[0]) {
                    case '+':
                        n = n1 + n2;
                        stack.push(n);
                        break;
                    case '-':
                        n = n1 - n2;
                        stack.push(n);
                        break;
                    case '*':
                        n = n1 * n2;
                        stack.push(n);
                        break;
                }
                break;
            default:
                n = stoi(buf);
                stack.push(n);
                break;
        }
    }

    cout << stack.top() << '\n';
}

