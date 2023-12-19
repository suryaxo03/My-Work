// insertion at beginning in a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
}node;

node* head = NULL;

void begInsert(){
    int n;
    node* ptr;
    ptr = (node*)malloc(sizeof(node*));
    /* general code
    ptr->num = n;
    ptr->next = head;
    head = ptr; */

    if(ptr==NULL){
        printf("Memory overflow!");
        exit(0);
    }
    else{
        printf("Enter an integer:\n");
        scanf("%d", &n);

        ptr->num = n; // allocating the number received to the ptr node
        ptr->next = head; // directing the node of ptr to the existing linked where head is pointing to the first node of
        head = ptr; // keeping this new node as head because it's inserted at the beginning
        printf("Node Inserted!\n");
    }
}

void display(){
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
    printf("How many elements do you want to insert?\n");
    scanf("%d", &count);

    for(int i=0; i<count; i++){
        begInsert();
    }
    display();
}
