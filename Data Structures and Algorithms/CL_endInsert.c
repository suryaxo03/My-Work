// Insertion at the end in circular linked list
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
    newNode->next = last;
    return last;
}

node* addEnd(node* last, int n){
    if(last==NULL) addToEmpty(last, n);
    node* newNode = (node*)malloc(sizeof(node*));
    newNode->num = n;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}

void traverse(node* last){
    if(last==NULL){
        printf("Nothing to print!\n");
        return;
    }
    node* p;
    p = last->next;
    printf("Printing Values:\n");
    do{
        printf("%d ", p->num);
        p = p->next;
    }while(p!=last->next);
}

void main(){
    node* last = NULL;
    last = addToEmpty(last, 1);
    last = addEnd(last, 2);
    last = addEnd(last, 3);
    last = addEnd(last, 4);
    traverse(last);
}
