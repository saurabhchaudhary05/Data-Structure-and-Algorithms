#include <iostream>
using namespace std;

#define MAX_SIZE 100

struct Stack {
    char stackArray[MAX_SIZE];
    int top;
};

void initialize(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, char c) {
    if (stack->top < MAX_SIZE - 1) {
        stack->stackArray[++(stack->top)] = c;
    }
}

char pop(Stack* stack) {
    if (stack->top >= 0) {
        return stack->stackArray[(stack->top)--];
    } else {
        return '\0';  
    }
}

bool areBracketsBalanced(string expr) {
    Stack stack;
    initialize(&stack);

    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            push(&stack, expr[i]);
            continue;
        }

        if (stack.top == -1) {
            return false;
        }

        char x = pop(&stack);
        switch (expr[i]) {
            case ')':
                if (x != '(') return false;
                break;

            case '}':
                if (x != '{') return false;
                break;

            case ']':
                if (x != '[') return false;
                break;
        }
    }

    return (stack.top == -1);
}

int main() {
    string expr;
    cin >> expr;

    if (areBracketsBalanced(expr)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }

    return 0;
}

