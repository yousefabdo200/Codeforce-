#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

struct Deque {
    Node* front;
    Node* back;
};

typedef struct Deque Deque;

void initDeque(Deque* deque) {
    deque->front = NULL;
    deque->back = NULL;
}

void pushFront(Deque* deque, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = deque->front;
    deque->front = newNode;
    if (deque->back == NULL) {
        deque->back = newNode;
    }
}

void pushBack(Deque* deque, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (deque->back != NULL) {
        deque->back->next = newNode;
    }
    deque->back = newNode;
    if (deque->front == NULL) {
        deque->front = newNode;
    }
}

int popFront(Deque* deque) {
    if (deque->front == NULL) {
        fprintf(stderr, "Error: Deque underflow\n");
        exit(1);
    }
    int value = deque->front->data;
    Node* temp = deque->front;
    deque->front = deque->front->next;
    free(temp);
    if (deque->front == NULL) {
        deque->back = NULL;
    }
    return value;
}

int popBack(Deque* deque) {
    if (deque->back == NULL) {
        fprintf(stderr, "Error: Deque underflow\n");
        exit(1);
    }
    int value = deque->back->data;
    Node* temp = deque->back;
    if (deque->front == deque->back) {
        deque->front = NULL;
        deque->back = NULL;
    } else {
        Node* current = deque->front;
        while (current->next != deque->back) {
            current = current->next;
        }
        current->next = NULL;
        deque->back = current;
    }
    free(temp);
    return value;
}

int main() {
    int numOperations, value;
    scanf("%d", &numOperations);
    getchar(); // Consume newline after reading numOperations

    Deque deque;
    initDeque(&deque);
    int isReversed = 0;

    while (numOperations--) {
        char operation[20];
        scanf("%s", operation);

        if (strcmp(operation, "toFront") == 0) {
            scanf("%d", &value);
            if (isReversed) {
                pushBack(&deque, value);
            } else {
                pushFront(&deque, value);
            }
        } else if (strcmp(operation, "push_back") == 0) {
            scanf("%d", &value);
            if (isReversed) {
                pushFront(&deque, value);
            } else {
                pushBack(&deque, value);
            }
        } else if (strcmp(operation, "front") == 0) {
            if (deque.front == NULL) {
                printf("No job for Ada?\n");
            } else {
                if (isReversed) {
                    printf("%d\n", popBack(&deque));
                } else {
                    printf("%d\n", popFront(&deque));
                }
            }
        } else if (strcmp(operation, "back") == 0) {
            if (deque.front == NULL) {
                printf("No job for Ada?\n");
            } else {
                if (isReversed) {
                    printf("%d\n", popFront(&deque));
                } else {
                    printf("%d\n", popBack(&deque));
                }
            }
        } else if (strcmp(operation, "reverse") == 0) {
            isReversed = !isReversed;
        }
    }

    // Free remaining elements in the deque
    while (deque.front != NULL) {
        if (isReversed) {
            printf("%d\n", popBack(&deque));
        } else {
            printf("%d\n", popFront(&deque));
        }
    }

    return 0;
}
