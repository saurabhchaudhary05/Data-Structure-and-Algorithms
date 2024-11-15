#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void initialize(Stack* stack) {
    stack->top = -1;
}

bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}

void push(Stack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        exit(EXIT_FAILURE);
    }
    stack->data[++(stack->top)] = value;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        exit(EXIT_FAILURE);
    }
    return stack->data[(stack->top)--];
}

int evaluatePostfix(char postfix[]) {
    Stack stack;
    initialize(&stack);

    int i = 0;
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(&stack, postfix[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            switch (postfix[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    exit(EXIT_FAILURE);
            }
        }
        i++;
    }

    return pop(&stack);
}

int main() {
    char postfix[MAX_SIZE];
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << result << endl;

    return 0;
}

