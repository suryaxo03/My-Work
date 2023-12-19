// Deleting an intermediate node
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* addToEmpty(int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node* addAtEnd(struct node* tail, int data)
{
    struct node* newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;

    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;
    return tail;
}

struct node* createList(struct node* tail)
{
    int i, n, data;
    printf("Enter the number of nodes of the linked list: ");
    scanf("%d", &n);

    if (n == 0)
        return tail;
    printf("Enter the element 1: ");
    scanf("%d", &data);
    tail = addToEmpty(data);

    for(i=1; i<n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &data);
        tail = addAtEnd(tail, data);
    }
    return tail;
}

void print(struct node* tail)
{
    if(tail == NULL)
        printf("No node in the list.");
    else{
    struct node* p = tail->next;
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while(p!=tail->next);
    }
    printf("\n");
}

struct node* delInter(struct node* tail, int pos)
{
    if(tail == NULL)
        return tail;
    struct node* temp = tail->next;
    if(tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    while(pos > 2)
    {
        temp = temp->next;
        pos--;
    }
    struct node* temp2 = temp->next;
    temp->next = temp2->next;

    //HANDLING THE CASE OF DELEIING THE LAST NODE
    if(temp2 == tail)
        tail = temp;
    free(temp2);
    temp2 = NULL;
    return tail;
}

int main()
{
    struct node* tail = NULL;
    tail = createList(tail);
    int po;
    printf("Enter the position of element that you want to delete:\n");
    scanf("%d", &po);
    printf("\nList before Deletion: ");
    print(tail);

    tail = delInter(tail, po);
    printf("List after Deletion: ");
    print(tail);
    return 0;
}
