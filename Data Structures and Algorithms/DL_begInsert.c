// insertion at beginning in doubly linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
    struct node* prev;
}node;

node* head = NULL;

void begInsertDL(){
    int n;
    node* ptr = (node*)malloc(sizeof(node*));

    if(ptr == NULL){
        printf("Memory Overflow!");
        exit(0);
    }
    else{
        printf("Enter an integer:\n");
        scanf("%d", &n);
        ptr->num = n;
        if(head==NULL){
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else{
            ptr->next = head;
            head->prev = ptr;
            ptr->prev = NULL;
            head = ptr;
        }
        printf("Node Inserted!\n");
    }
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
        begInsertDL();
    }
    displayDL();
}
