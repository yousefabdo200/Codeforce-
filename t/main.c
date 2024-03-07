#include <stdio.h>

#define MAX_SIZE 1000000

int stack[MAX_SIZE];
int top = -1;

void push(int n) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = n;
    }
}

void pop() {
    if (top > -1) {
        top--;
    }
}

void printTop() {
    if (top > -1) {
        printf("%d\n", stack[top]);
    } else {
        printf("Empty!\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int queryType;
        scanf("%d", &queryType);

        switch (queryType) {
            case 1: {
                int n;
                scanf("%d", &n);
                push(n);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                printTop();
                break;
            }
            default:
                break;
        }
    }

    return 0;
}
