#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int count = 0;
void insert(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
    count++;
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ->", node->data);
        node = node->next;
    }
    printf("\nNodes= %d", count);
}
void end(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
}
void spec(int new_data,int pos,struct Node **head_ref)
{
     if (pos < 1 || pos > count + 1)
        printf("Invalid position!");
     else{
         
     }
}
int main()
{
    struct Node *head = NULL;
    int choice = 0, val,pos;
    while (choice != 4)
    {
        printf("\nPress 1 for push element at first");
        printf("\nPress 2 for push element at end");
        printf("\nPress 3 for push element at any position");
        printf("\nPress 4 to exit ");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &val);
            insert(&head, val);
            printList(head);
            break;
        case 2:
            printf("Enter the value to push: ");
            scanf("%d", &val);
            end(&head, val);
            printList(head);
            break;
        case 3:
            printf("\nEnter the value to push: ");
            scanf("%d", &val);
            printf("\nEnter the position: ");
            scanf("%d", &pos);
            spec(&val,&pos,head);
            printList(head);
            break;

        }
    }
}