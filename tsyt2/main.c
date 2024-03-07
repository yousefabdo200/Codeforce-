#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100
int main() {
    char e[100];
    double stack[MAX_SIZE];
    int top = -1;

    while (fgets(e, sizeof(e), stdin) != NULL) {
        e[strcspn(e, "\n")] = '\0';

        char *token = strtok(e, " ");
        while (token != NULL) {
            if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
                double value = atof(token);
                if (top == MAX_SIZE - 1) {
                    printf("ERROR\n");
                    top = -1;
                    break;
                }
                stack[++top] = value;
            } else if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') {
                if (top < 1) {
                    printf("ERROR\n");
                    top = -1;
                    break;
                }
                double operand1 = stack[top--];
                double operand2 = stack[top--];
                double result;
                switch (token[0]) {
                    case '+':
                        result = operand2 + operand1;
                        break;
                    case '-':
                        result = operand2 - operand1;
                        break;
                    case '*':
                        result = operand2 * operand1;
                        break;
                    case '/':
                        if (!operand1) {
                            printf("ERROR\n");
                            top = -1;
                            break;
                        }
                        result = operand2 / operand1;
                        break;
                }
                if (top == MAX_SIZE - 1) {
                    printf("ERROR\n");
                    top = -1;
                    break;
                }
                stack[++top] = result;
            } else {
                printf("ERROR\n");
                top = -1;
                break;
            }

            token = strtok(NULL, " ");
        }

        if (top == 0) {
            printf("%.4f\n", stack[0]);
        } else if (top != -1) {
            printf("ERROR\n");
        }

        top = -1;
    }

    return 0;
}
