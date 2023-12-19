//// Print jobs in a printer shop
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct printJob{
//    int jobID;
//    char documentName[50];
//    struct printJob *next;
//}printJob;
//
//typedef struct printQueue{
//    printJob* front;
//    printJob* rear;
//}printQueue;
//
//void initPrintQueue(printQueue *queue){
//    queue->front = queue->rear = NULL;
//}
//
//void enqueue(printQueue *queue, int jobID, const char* documentName){
//    printJob* newJob = (printJob*)malloc(sizeof(printJob));
//    newJob->jobID = jobID;
//    snprintf(newJob->documentName, sizeof(newJob->documentName), "%s", documentName);
//    newJob->next = NULL;
//
//    if(queue->rear == NULL){
//        queue->front = queue->rear = newJob;
//    }
//    else{
//        queue->rear->next = newJob;
//        queue->rear = newJob;
//    }
//}
//
//void dequeue(printQueue *queue){
//    if(queue->front == NULL){
//        printf("Printer queue is empty!");
//    }
//    printJob* temp = queue->front;
//    queue->front = queue->front->next;
//    printf("Printing job %d: %s\n", temp->jobID, temp->documentName);
//    free(temp);
//}
//
//int main(){
//    printQueue PrintQueue;
//    initPrintQueue(&PrintQueue);
//    enqueue(&PrintQueue, 1, "Doc1.pdf");
//    enqueue(&PrintQueue, 2, "Doc2.pdf");
//    enqueue(&PrintQueue, 3, "Doc3.pdf");
//    dequeue(&PrintQueue);
//    dequeue(&PrintQueue);
//    dequeue(&PrintQueue);
//    return 0;
//}

#include<stdio.h>
#include<string.h>
#define SIZE 100

//Basic value initialisation
char queue[SIZE][100];
int front = -1, rear = -1;

//Function created to handle enqueue
void enqueue(char* documentName){
    if(rear == SIZE-1){
        printf("Can't enqueue %s as the queue is full\n", documentName);
    }
    else{
        //The first element condition
        if(front == -1){
            front = 0;
        }

        rear = rear + 1;
        strcpy(queue[rear], documentName);
        printf("We have enqueued %s\n",documentName);
   }
}

//Function created to handle dequeue
void dequeue(){
    if(front == -1){
        printf("Can't dequeue as the queue is empty\n");
    }
    else{
        printf("We have dequeued : %s\n", queue[front]);
        front = front + 1;

        //Only happens when the last element was dequeued
        if(front > rear){
	        front = -1;
	        rear = -1;
        }
   }
}

//function to print the queue
void printQueue(){
    if(rear == -1)
        printf("\nUnable to display asstr queue is empty");
    else{
        int i;
        printf("\nThe queue after enqueue & dequeue ops looks like :");

        for(i = front; i <= rear; i++)
	        printf("%s ", queue[i]);
   }
}

int main()
{
//    //enqueue begins here
//    enqueue(2);
//    enqueue(4);
//    enqueue(6);
//    enqueue(8);
//
//    //dequeue beings here
//    dequeue();
//    dequeue();
    int n;
    printf("Enter number of documents to be printed:\n");
    scanf("%d", &n);
    char str[100];
    for(int i=0; i<n; i++){
        printf("Enter the document %d name: ", i+1);
        scanf("%s", &str);
        enqueue(str);
//        str = "";
    }
    dequeue();
    printQueue();
    return 0;
}
