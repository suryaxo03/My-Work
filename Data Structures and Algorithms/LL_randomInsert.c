// insertion at the random location of a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* next;
}node;

node* head = NULL;

void randomInsert(){
    int n, loc;
    node* temp;
    node* ptr = (node*)malloc(sizeof(node*));
    if(ptr==NULL){
        printf("Memory Overflow!");
        exit(0);
    }
    else{
        printf("\nEnter an integer:\n");
        scanf("%d", &n);
        ptr->num = n;
        printf("Enter location where you want to insert %d:\n", n);
        scanf("%d", &loc);
        temp = head;
        for(int i=1; i<loc-1; i++){
            temp = temp->next;
            if(temp==NULL){
                printf("\nCan\'t insert node!");
                return;
            }
        }
//        int i=0;
//        while(i<loc){
//            temp = temp->next;
//            i++;
//            if(temp==NULL){
//                printf("\nCan\'t insert node!\n");
//                return;
//            }
//        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Node Inserted!\n");
    }
}

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
    randomInsert();
    display();
}
