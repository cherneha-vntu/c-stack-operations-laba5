#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *push(Node *top, int val) {
    Node *n = (Node *)malloc(sizeof(Node));
    if (n != NULL) {
        n->data = val;
        n->next = top;
    }
    return n;
}

void print_stack(Node *top, const char *name) {
    printf("%s: ", name);
    if (top == NULL) {
        printf("порожній\n");
        return;
    }
    while (top) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

void transfer(Node **s1, Node **s2) {
    while (*s1 != NULL && (*s1)->data % 2 != 0) {
        Node *tmp = *s1;
        *s1 = (*s1)->next;

        tmp->next = *s2;
        *s2 = tmp;
    }
}

void free_stack(Node *top) {
    Node *tmp;
    while (top != NULL) {
        tmp = top;
        top = top->next;
        free(tmp);
    }
}

int main(void) {
    Node *s1 = NULL, *s2 = NULL;
    int choice, val;

    while (1) {
        printf("\n1. Додати число у перший стек\n");
        printf("2. Вивести стеки\n");
        printf("3. Перемістити до першого парного\n");
        printf("0. Вихід\n");
        printf("Вибір: ");

        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            printf("Введіть число: ");
            scanf("%d", &val);
            s1 = push(s1, val);
        } else if (choice == 2) {
            print_stack(s1, "Стек 1");
            print_stack(s2, "Стек 2");
        } else if (choice == 3) {
            transfer(&s1, &s2);
            printf("Переміщено.\n");
        } else if (choice == 0) {
            free_stack(s1);
            free_stack(s2);
            break;
        } else {
            printf("Невідома команда.\n");
        }
    }

    return 0;
}