// Insertion at beginning in circular linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
}node;

node* addToEmpty(node* last, int n){
    if(last!=NULL) return last;

    node* newNode = (node*)malloc(sizeof(node*));
    newNode->num = n;
    last = newNode;
    last->next = last;
    return last;
}

node* addBegin(node* last, int n){
    if(last==NULL) return addToEmpty(last, n);

    node* newNode = (node*)malloc(sizeof(node*));
    newNode->num = n;
    newNode->next = last->next;
    last->next = newNode;
    return last;
}

void traverse(node* last){
    node* p;
    if(last==NULL){
        printf("Nothing to print!\n");
        return;
    }
    p=last->next;
    printf("Printing Values:\n");
    do{
        printf("%d ", p->num);
        p = p->next;
    }while(p!=last->next);
}

void main(){
    node* last = NULL;
    last = addToEmpty(last, 1);
    last = addBegin(last, 2);
    last = addBegin(last, 3);
    last = addBegin(last, 4);
    traverse(last);
}
