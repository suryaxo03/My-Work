//Insertion of an integer after a specified existing integer in circular linked list

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
    if(last==NULL) return addToEmpty(last, n);
    node* newNode = (node*)malloc(sizeof(node*));
    newNode->num = n;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}

node* addToAfter(node* last, int n, int item){
    if(last==NULL) return NULL;
    node* p;
    p = last->next;
    do{
        if(p->num == item){
            node* newNode = (node*)malloc(sizeof(node*));
            newNode->num = n;
            newNode->next = p->next;
            p->next = newNode;
            if(p==last) last = newNode;
            return last;
        }
        p = p->next;
    }while(p!=last->next);
    printf("The given node is not present in the list.\n");
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
    last = addEnd(last, 1);
    last = addEnd(last, 2);
    last = addEnd(last, 3);
    last = addEnd(last, 4);
    last = addToAfter(last, 8, 3);
    traverse(last);
}
