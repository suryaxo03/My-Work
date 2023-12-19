// insertion at random location in doubly linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
    struct node* prev;
}node;

node* head = NULL;

void endInsertDL(){
    int n;
    node* temp;
    node* ptr = (node*)malloc(sizeof(node*));
    printf("Enter an integer:\n");
    scanf("%d", &n);
    ptr->num = n;
    if(head == NULL){
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
    }
    else{
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
        ptr->next = NULL;
    }
    printf("Node Inserted!\n");
}

void randomInsertDL(){
    int n, loc;
    node* temp;
    node* ptr = (node*)malloc(sizeof(node*));
    printf("Enter an integer:\n");
    scanf("%d", &n);
    ptr->num = n;
    printf("Enter the location where you want to insert the node:\n");
    scanf("%d", &loc);
    temp = head;
    for(int i=0; i<loc-1; i++){
        temp = temp->next;
        if(temp==NULL){
            printf("Can\'t insert!\n");
            return;
        }
    }
        ptr->next = temp->next;
        ptr->prev = temp;
        temp->next = ptr;
        temp->next->prev = ptr;
        printf("Node Inserted!\n");
}

void displayDL(){
    node* ptr = (node*)malloc(sizeof(node*));
    ptr = head;
    if(ptr==NULL){
        printf("Nothing to print!");
    }
    else{
        printf("\nPrinting Values:\n");
        while(ptr!=NULL){
            printf("%d ", ptr->num);
            ptr = ptr->next;
        }
    }
}

void main(){
    int count;
    printf("Enter the number of nodes to insert:\n");
    scanf("%d", &count);
    for(int i=0; i<count; i++){
        endInsertDL();
    }
    randomInsertDL();
    displayDL();
}
