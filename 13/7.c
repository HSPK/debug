#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main() 
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n) 
{
    Node *temp, *new_node, *head;
    int i;

    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    for (i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) 
{
    Node *p = head;
    Node *q;
    while (p->data != k) {
        p = p->next;
    }
    if (m == 1) {
        for(int i = 0; i < n; i++) {
            printf("%d ", p->data);
            p = p->next;
        }
        return;
    }
 
    if (p != NULL) {
        while (p != p->next) {
            int j = 1;
            while(j < m - 1) {
            	p = p->next;
            	++j;
            }
            q = p->next;
            printf("%d ", q->data);
            p->next = q->next;
            free(q);
            q = NULL;
            p = p->next;
        }
        printf("%d", p->data);
    }
    return;
}
