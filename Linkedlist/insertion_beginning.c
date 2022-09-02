#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void insert(node **head, int num)
{
    node *t, *prv, *cur;
    t = (node *)malloc(sizeof(node));
    t->data = num;
    for (cur = *head, prv = NULL; cur; cur = cur->next)
        prv = cur;
    t->next = cur;
    if (prv)
        prv->next = t;
    else
        *head = t;
}
void insert_beginning(node **head, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void display(node *head)
{
    while (head != NULL)
    {
        printf(" %d  ", head->data);
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    int num;
    printf("Enter the element to be inserted: ");
    scanf("%d", &num);
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);

    insert_beginning(&head, num);
    display(head);
    return 0;
}