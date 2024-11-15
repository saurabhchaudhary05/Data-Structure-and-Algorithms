#include <iostream>

using namespace std;

// Custom stack implementation
struct Stack {
    char data[100];
    int top;

    Stack() {
        top = -1;
    }

    void push(char x) {
        data[++top] = x;
    }

    char pop() {
        if (top == -1) {
            cerr << "Stack is empty!" << endl;
            return '\0';  // Return null character for error handling
        }
        return data[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

void infixToPostfix(string exp) {
    Stack s;
    string result;

    for (int i = 0; i < exp.size(); i++) {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^' || exp[i] == '(' || exp[i] == ')') {
            // push to stack if '(' is found
            if (exp[i] == '(') {
                s.push(exp[i]);
            }
            // if ')' is found, pop elements till '(' is not found
            else if (exp[i] == ')') {
                while (!s.isEmpty() && s.data[s.top] != '(') {
                    result += s.pop();
                }
                if (!s.isEmpty()) {
                    s.pop(); // Pop the '(' from the stack
                }
            }
            // operator is one of + - * / ^
            else {
                if (s.isEmpty() || s.data[s.top] == '(' || prec(s.data[s.top]) < prec(exp[i]) || exp[i] == '^') {
                    s.push(exp[i]);
                }
                else {
                    while (!s.isEmpty() && prec(s.data[s.top]) >= prec(exp[i])) {
                        result += s.pop();
                    }
                    s.push(exp[i]);
                }
            }
        }
        // append operands to result
        else {
            result += exp[i];
        }
    }

    while (!s.isEmpty()) {
        result += s.pop();
    }

    cout << result << '\n';
}

int main() {
    
        string exp;
        cin >> exp;
        infixToPostfix(exp);
    return 0;
}

