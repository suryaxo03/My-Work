// insertion at end in doubly linked list
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
    displayDL();
}
