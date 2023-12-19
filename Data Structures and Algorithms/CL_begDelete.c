// deletion of first node in circular linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
}node;

node* begDelete(node* last){
    if(last==NULL){
        printf("Nothing to delete!\n");
        return last;
    }
    if(last->next==last){
        free(last);
        last = NULL;
        return last;
    }
    node* temp = last->next;
    last->next = temp->next;
    free(temp);
    temp = NULL;
    return last;
}

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
    printf("Before Deletion:\n");
    traverse(last);
    printf("\nAfter Deletion:\n");
    last = begDelete(last);
    last = begDelete(last);
    traverse(last);
}
