// insertion at the end of a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
}node;

node* head = NULL;

void endInsert(){
    node* temp;
    node *ptr = (node*)malloc(sizeof(node*));
    int n;

    if(ptr==NULL){
        printf("Memory overflow!");
        exit(0);
    }
    else{
        printf("Enter an integer:\n");
        scanf("%d", &n);
        ptr->num = n;
        if(head==NULL){
            ptr->next = NULL;
            head = ptr;
            printf("Node Inserted!\n");
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node Inserted!\n");
        }
    }
}

void display(){
    node* ptr;
    ptr = head;
    if(ptr == NULL){
        printf("Nothing to print!");
    }
    else{
        printf("Printing Values:\n");
        while(ptr!=NULL){
            printf("%d ", ptr->num);
            ptr = ptr->next;
        }
    }
}

void main(){
    int count;
    printf("Enter the number of elements to be inserted:\n");
    scanf("%d", &count);

    for(int i=0; i<count; i++){
        endInsert();
    }
    display();
}
