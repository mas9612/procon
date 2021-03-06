#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> stack;

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

