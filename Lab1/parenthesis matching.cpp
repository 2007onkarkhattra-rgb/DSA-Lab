#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct Stack {
    char arr[MAX];
    int top;
};
void initStack(struct Stack* s) {
    s->top = -1;
}
int isEmpty(struct Stack* s) {
    return s->top == -1;
}
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}
void push(struct Stack* s, char c) {
    if (isFull(s)) return;
    s->arr[++(s->top)] = c;
}
char pop(struct Stack* s) {
    if (isEmpty(s)) return '\0';
    return s->arr[(s->top)--];
}
int isMatchingPair(char char1, char char2) {
    if (char1 == '(' && char2 == ')') return 1;
    if (char1 == '{' && char2 == '}') return 1;
    if (char1 == '[' && char2 == ']') return 1;
    return 0;
}
int areParenthesesBalanced(char expr[]) {
    struct Stack s;
    initStack(&s);
    for (int i = 0; i < strlen(expr); i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(&s, expr[i]);
        }
        if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (isEmpty(&s)) {
                return 0; // Unmatched closing bracket
            }
            char popped = pop(&s);
            if (!isMatchingPair(popped, expr[i])) {
                return 0; // Mismatched pair
            }
        }
    }
    return isEmpty(&s);
}
int main() {
    char expr1[] = "{[()()]}";
    char expr2[] = "([)]";
    printf("Expression 1: %s\n", expr1);
    if (areParenthesesBalanced(expr1))
        printf("Result: Balanced\n\n");
    else
        printf("Result: Not Balanced\n\n");
    printf("Expression 2: %s\n", expr2);
    if (areParenthesesBalanced(expr2))
        printf("Result: Balanced\n");
    else
        printf("Result: Not Balanced\n");
    return 0;
}