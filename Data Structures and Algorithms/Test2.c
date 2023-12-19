//////1) Passing a pointer to an array
//
////#include<stdio.h>
////
////void printArray(int *arr, int n){
////    for(int i = 0; i < n; i++){
////        printf("%d ", arr[i]);
////    }
////}
////
////void main(){
////    int arr[] = {1, 2, 3, 4, 5};
////    int len = sizeof(arr)/sizeof(arr[0]);
////    printf("Printing array values after passing arr as pointer:\n");
////    printArray(arr, len);
////}
//
////2) Linked list insertion
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//
//node* head = NULL;
//
//void begInsertLL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!\n");
//        return;
//    }
//    int n;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    if(head == NULL){
//        ptr->next = NULL;
//        head = ptr;
//        printf("Node Inserted!\n");
//    }
//    else{
//       ptr->next = head;
//       head = ptr;
//       printf("Node begInserted!\n");
//    }
//}
//
//void endInsertLL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    node* temp;
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!\n");
//        return;
//    }
//    int n;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    if(head == NULL){
//        ptr->next = NULL;
//        head = ptr;
//        printf("Node Inserted!\n");
//    }
//    else{
//        temp = head;
//        while(temp->next != NULL){
//            temp = temp->next;
//        }
//        temp->next = ptr;
//        ptr->next = NULL;
//        printf("Node endInserted!\n");
//    }
//}
//
//void randomInsertLL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!\n");
//        return;
//    }
//    int n;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    int loc;
//    printf("Enter the position to insert %d:\n", n);
//    scanf("%d", &loc);
//    node* temp;
//    temp = head;
//    for(int i = 1; i < loc-1; i++){
//        temp = temp->next;
//        if(temp == NULL){
//            printf("Can't insert!\n");
//            return;
//        }
//    }
//    ptr->next = temp->next;
//    temp->next = ptr;
//    printf("Node randomInserted!\n");
//}
//
//void displayLL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr = head;
//    if(ptr == NULL){
//        printf("Nothing to print, list is empty!\n");
//        return;
//    }
//    printf("Printing Values:\n");
//    while(ptr != NULL){
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    }
//    printf("NULL\n");
//}
//
//void main(){
//    begInsertLL();
//    begInsertLL();
//    begInsertLL();
//    endInsertLL();
//    endInsertLL();
//    endInsertLL();
//    displayLL();
//    randomInsertLL();
//    displayLL();
//}

////3) Doubly linked list insertion
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* prev;
//    struct node* next;
//}node;
//
//node* head = NULL;
//
//void begInsertDL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!\n");
//        return;
//    }
//    int n;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    if(head == NULL){
//        ptr->next = NULL;
//        ptr->prev = NULL;
//        head = ptr;
//        printf("Node Inserted!\n");
//    }
//    else{
//        ptr->next = head;
//        ptr->prev = NULL;
//        head->prev = ptr;
//        head = ptr;
//        printf("Node begInserted!\n");
//    }
//}
//
//void endInsertDL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    node* temp;
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!\n");
//        return;
//    }
//    int n;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    if(head == NULL){
//        ptr->next = NULL;
//        ptr->prev = NULL;
//        head = ptr;
//        printf("Node Inserted!\n");
//    }
//    else{
//        temp = head;
//        while(temp->next != NULL){
//            temp = temp->next;
//        }
//        temp->next = ptr;
//        ptr->prev = temp;
//        ptr->next = NULL;
//        printf("Node endInserted!\n");
//    }
//}
//
//void randomInsertDL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!\n");
//        return;
//    }
//    int n;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    int loc;
//    printf("Enter the position to insert %d:\n", n);
//    scanf("%d", &loc);
//    node* temp;
//    temp = head;
//    for(int i = 1; i < loc-1; i++){
//        temp = temp->next;
//        if(temp == NULL){
//            printf("Can't insert!\n");
//            return;
//        }
//    }
//    ptr->next = temp->next;
//    temp->next->prev = ptr;
//    temp->next = ptr;
//    printf("Node randomInserted!\n");
//}
//
//void displayDL(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr = head;
//    if(ptr == NULL){
//        printf("Nothing to print, list is empty!\n");
//        return;
//    }
//    printf("Printing Values:\n");
//    while(ptr != NULL){
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    }
//    printf("NULL\n");
//}
//
//void main(){
//    begInsertDL();
//    begInsertDL();
//    begInsertDL();
//    endInsertDL();
//    endInsertDL();
//    endInsertDL();
//    displayDL();
//    randomInsertDL();
//    displayDL();
//}

////4) Insertion in a circular linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//
//node* createCL(node* last, int n){
//    if(last != NULL){
//        return last;
//    }
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr->num = n;
//    last = ptr;
//    last->next = ptr;
//    return last;
//}
//
//node* begInsertCL(node* last, int n){
//    if(last == NULL)
//        return createCL(last, n);
//    node* ptr = (node*)malloc(sizeof(node*));
//
//    ptr->num = n;
//    ptr->next = last->next;
//    last->next = ptr;
//    return last;
//}
//
//node* endInsertCL(node* last, int n){
//    if(last == NULL)
//        return createCL(last, n);
//    node* ptr = (node*)malloc(sizeof(node));
//
//    ptr->num = n;
//    ptr->next = last->next;
//    last->next = ptr;
//    last = ptr;
//    return last;
//}
//
//node* randomInsertCL(node* last, int n, int item){
//    node* temp;
//    temp = last->next;
//    do{
//        if(temp->num == item){
//            node* ptr = (node*)malloc(sizeof(node*));
//            ptr->num = n;
//            ptr->next = temp->next;
//            temp->next = ptr;
//            if(temp == last)
//                last = ptr;
//            return last;
//        }
//        temp = temp->next;
//    } while(temp != last->next);
//    printf("%d is not present in the given linked list!\n", item);
//    return last;
//}
//
//void displayCL(node* last){
//    if(last == NULL){
//        printf("Nothing to print, list is empty!\n");
//        return;
//    }
//    node* ptr;
//    ptr = last->next;
//    printf("Printing Values:\n");
//    do{
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    } while(ptr != last->next);
//    printf("NULL\n");
//}
//
//void main(){
//    node* last = NULL;
//    last = begInsertCL(last, 1);
//    last = begInsertCL(last, 2);
//    last = begInsertCL(last, 3);
//    last = endInsertCL(last, 4);
//    last = endInsertCL(last, 5);
//    last = endInsertCL(last, 6);
//    last = randomInsertCL(last, 7, 3);
//    displayCL(last);
//}

//
////5) Deletion in circular linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//
//node* createCL(node* last, int n){
//    if(last != NULL){
//        return last;
//    }
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr->num = n;
//    last = ptr;
//    last->next = ptr;
//    return last;
//}
//
//node* begInsertCL(node* last, int n){
//    if(last == NULL)
//        return createCL(last, n);
//    node* ptr = (node*)malloc(sizeof(node*));
//
//    ptr->num = n;
//    ptr->next = last->next;
//    last->next = ptr;
//    return last;
//}
//
//node* begDeleteCL(node* last){
//    if(last == NULL){
//        printf("Nothing to delete, list is empty!\n");
//        return last;
//    }
//
//    node* ptr;
//    ptr = last->next;
//    last->next = ptr->next;
//    free(ptr);
//    ptr = NULL;
//    return last;
//}
//
//node* endDeleteCL(node* last){
//    if(last == NULL){
//        printf("Nothing to delete, list is empty!\n");
//        return last;
//    }
//
//    node* ptr;
//    ptr = last->next;
//    while(ptr->next != last){
//        ptr = ptr->next;
//    }
//    ptr->next = last->next;
//    free(last);
//    last = ptr;
//    return last;
//}
//
//node* randomDeleteCL(node* last, int pos){
//    node* temp1;
//    temp1 = last->next;
//    while(pos > 2){
//        temp1 = temp1->next;
//        pos--;
//    }
//    node* temp2 = temp1->next;
//    temp1->next = temp2->next;
//    if(last == temp2)
//        temp1 = last;
//    free(temp2);
//    temp2 = NULL;
//    return last;
//}
//
//void displayCL(node* last){
//    if(last == NULL){
//        printf("Nothing to print, list is empty!\n");
//        return;
//    }
//    node* ptr;
//    ptr = last->next;
//    printf("Printing Values:\n");
//    do{
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    } while(ptr != last->next);
//    printf("NULL\n");
//}
//
//void main(){
//    node* last = NULL;
//    last = begInsertCL(last, 1);
//    last = begInsertCL(last, 2);
//    last = begInsertCL(last, 3);
//    last = begInsertCL(last, 4);
//    last = begInsertCL(last, 5);
//    last = begInsertCL(last, 6);
//    displayCL(last);
//    last = begDeleteCL(last);
//    last = endDeleteCL(last);
//    last = randomDeleteCL(last, 3);
//    displayCL(last);
//}

////6) Reversing a linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//
//node* reverse(node* head){
//    node* prev = NULL;
//    node* current = head;
//    node* next = NULL;
//    while(current != NULL){
//        next = current->next;
//        current->next = prev;
//        prev = current;
//        current = next;
//    }
//    head = prev;
//    return head;
//}
//
//node* insert(node* head, int n){
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr->num = n;
//    if(head == NULL){
//        ptr->next = NULL;
//        head = ptr;
//        return head;
//    }
//    ptr->next = head;
//    head = ptr;
//    return head;
//}
//
//void display(node* head){
//    node* ptr = head;
//    if(ptr == NULL){
//        printf("Nothing to print, list is empty!\n");
//        return;
//    }
//    printf("Printing Values:\n");
//    while(ptr != NULL){
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    }
//    printf("NULL\n");
//}
//
//void main(){
//    node* head = NULL;
//    head = insert(head, 1);
//    head = insert(head, 2);
//    head = insert(head, 3);
//    head = insert(head, 4);
//    head = insert(head, 5);
//    printf("Original linked list: ");
//    display(head);
//    printf("Reversed linked list: ");
//    head = reverse(head);
//    display(head);
//}
//
////7) Merging of two linked lists
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    struct node* next;
//    int num;
//}node;
//
//node* insert(node* head, int n){
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr->num = n;
//    if(head == NULL){
//        ptr->next = NULL;
//        head = ptr;
//        return head;
//    }
//    ptr->next = head;
//    head = ptr;
//    return head;
//}
//
//node* mergeList(node* list1, node* list2){
//    if(list1 == NULL){
//        return list2;
//    }
//    if(list2 == NULL){
//        return list1;
//    }
//    node* mergedList = NULL;
//    if(list1->num <= list2->num){
//        mergedList = list1;
//        mergedList->next = mergeList(list1->next, list2);
//    }
//    else if(list2->num <= list1->num){
//        mergedList = list2;
//        mergedList->next = mergeList(list1, list2->next);
//    }
//    return mergedList;
//}
//
//void display(node* head){
//    node* ptr;
//    ptr = head;
//    if(ptr == NULL){
//        printf("Nothing to print, list is empty!\n");
//        return;
//    }
//    printf("Printing Values:\n");
//    while(ptr != NULL){
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    }
//    printf("NULL\n");
//}
//
//void main(){
//    node* list1 = NULL;
//    node* list2 = NULL;
//    list1 = insert(list1, 1);
//    list1 = insert(list1, 3);
//    list1 = insert(list1, 5);
//    list2 = insert(list2, 2);
//    list2 = insert(list2, 4);
//    list2 = insert(list2, 6);
//    printf("List1 and List2 before merging:\n");
//    printf("List1: ");
//    display(list1);
//    printf("List2: ");
//    display(list2);
//    node* mergedList = mergeList(list1, list2);
//    printf("Merged list: ");
//    display(mergedList);
//}

////7) Infix to Postfix expression
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//#define SIZE 100
//typedef struct stack{
//    char items[SIZE];
//    int top;
//}stack;
//
//int isEmpty(stack* Stack){
//    return Stack->top == -1;
//}
//
//void push(stack* Stack, char ch){
//    if(Stack->top == SIZE-1){
//        printf("STACK OVERFLOW!\n");
//        return;
//    }
//    Stack->items[++Stack->top] = ch;
//}
//
//char pop(stack* Stack){
//    if(Stack->top == -1){
//        printf("STACK UNDERFLOW!\n");
//        return 0;
//    }
//    return Stack->items[Stack->top--];
//}
//
//int isOperator(char ch){
//    return(ch == '+' || ch == '-' || ch == '*' || ch == '/');
//}
//
//int precedance(char ch){
//    if(ch == '+' || ch == '-')
//        return 1;
//    if(ch == '*' || ch == '/')
//        return 2;
//    return 0;
//}
//
//void infixToPostfix(char* infix){
//    stack* Stack;
//    Stack->top = -1;
//    int len = strlen(infix);
//    printf("Postfix Expression:\n");
//    for(int i = 0; i < len; i++){
//        char ch = infix[i];
//        if(isalnum(ch)){
//            printf("%c", ch);
//        }
//        else if(ch == '('){
//            push(Stack, ch);
//        }
//        else if(ch == ')'){
//            while(!isEmpty(Stack) && Stack->items[Stack->top] != '('){
//                printf("%c", pop(Stack));
//            }
//            if(!isEmpty(Stack) && Stack->items[Stack->top] != '('){
//                printf("Invalid Expression!\n");
//                return;
//            }
//            else{
//                pop(Stack);
//            }
//        }
//        else{
//            while(!isEmpty(Stack) && precedance(ch) <= precedance(Stack->items[Stack->top])){
//                printf("%c", pop(Stack));
//            }
//            push(Stack, ch);
//        }
//    }
//    while(!isEmpty(Stack)){
//        printf("%c", pop(Stack));
//    }
//    printf("\n");
//}
//
//void main(){
//    char infix[SIZE];
//
//    printf("Enter an infix expression:\n");
//    scanf("%s", infix);
//
//    printf("Infix Expression: %s\n", infix);
//    infixToPostfix(infix);
//}

////9) Reversing a string using stacks
//
//#include<stdio.h>
//#include<string.h>
//#define SIZE 100
//
//char stack[SIZE];
//int top = -1;
//
//void push(char ch){
//    if(top == SIZE-1){
//        printf("STACK OVERFLOW!\n");
//        return;
//    }
//    stack[++top] = ch;
//}
//
//void pop(){
//    if(top == -1){
//        printf("STACK UNDERFLOW!\n");
//        return;
//    }
//    printf("%c", stack[top--]);
//}
//
//void main(){
//    char str[SIZE];
//    printf("Enter a string:\n");
//    scanf("%s", str);
//    int len = strlen(str);
//    printf("Original String: %s\n", str);
//    for(int i = 0; i < len; i++){
//        push(str[i]);
//    }
//    printf("Reversed String: ");
//    for(int i = 0; i < len; i++){
//        pop();
//    }
//}

////10) Printing operation using queues
//
//#include<stdio.h>
//#include<string.h>
//#define SIZE 100
//
//char queue[SIZE][SIZE];
//int front = -1, rear = -1;
//
//void enqueue(char *docName){
//    if(rear == SIZE-1){
//        printf("Can't enqueue, queue is full!\n");
//        return;
//    }
//    if(front == -1){
//        front = 0;
//    }
//    rear = rear + 1;
//    strcpy(queue[rear], docName);
//    printf("%s is enqueued for printing operation!\n", docName);
//}
//
//void dequeue(){
//    if(front == -1){
//        printf("Nothing to dequeue, queue is empty!\n");
//        return;
//    }
//    printf("%s is dequeued and printed!\n", queue[front]);
//    front = front + 1;
//    if(front > rear){
//        front = -1;
//        rear = -1;
//    }
//}
//
//void main(){
//    int count;
//    printf("Enter the number of documents to be printed:\n");
//    scanf("%d", &count);
//
//    char docName[SIZE];
//    for(int i = 0; i < count; i++){
//        printf("Enter document %d: ", i+1);
//        scanf("%s", docName);
//        enqueue(docName);
//    }
//
//    for(int i = 0; i < count; i++){
//        dequeue();
//    }
//}

////11) Insertion, Deletion, Search for a node in a BST
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* left;
//    struct node* right;
//}node;
//
//node* createTree(int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//node* insertNode(node* root, int n){
//    if(root == NULL)
//        return createTree(n);
//    if(n < root->num)
//        root->left = insertNode(root->left, n);
//    else if(n > root->num)
//        root->right = insertNode(root->right, n);
//    return root;
//}
//
//node* search(node* root, int key){
//    if(root == NULL || root->num == key){
//        return root;
//    }
//    if(key < root->num){
//        return search(root->left, key);
//    }
//    else if(key > root->num){
//        return search(root->right, key);
//    }
//}
//
//node* findMin(node* Node){
//    while(Node->left != NULL){
//        Node = Node->left;
//    }
//    return Node;
//}
//
//void inOrderTraversal(node* root){
//    if(root != NULL){
//        inOrderTraversal(root->left);
//        printf("%d ", root->num);
//        inOrderTraversal(root->right);
//    }
//}
//
//void preOrderTraversal(node* root){
//    if(root != NULL){
//        printf("%d ", root->num);
//        preOrderTraversal(root->left);
//        preOrderTraversal(root->right);
//    }
//}
//
//void postOrderTraversal(node* root){
//    if(root != NULL){
//        postOrderTraversal(root->left);
//        postOrderTraversal(root->right);
//        printf("%d ", root->num);
//    }
//}
//
//void main(){
//    node* root = NULL;
//    root = insertNode(root, 50);
//    root = insertNode(root, 30);
//    root = insertNode(root, 20);
//    root = insertNode(root, 40);
//    root = insertNode(root, 70);
//    root = insertNode(root, 60);
//
//    printf("In Order Traversal: ");
//    inOrderTraversal(root);
//    printf("\n");
//
//    printf("Pre Order Traversal: ");
//    preOrderTraversal(root);
//    printf("\n");
//
//    printf("Post Order Traversal: ");
//    postOrderTraversal(root);
//    printf("\n");
//
//    int searchKey = 100;
//    node* searchResult = search(root, searchKey);
//    if(searchResult){
//        printf("Key %d is found in BST!\n", searchKey);
//    }
//    else{
//        printf("Key %d is not found in BST!\n", searchKey);
//    }
//}

//
//BFS

#include<stdio.h>
#define SIZE 100

int visited[SIZE] = {0};
int queue[SIZE];

int front = 0, rear = 0;

void printAdjMat(int adjMat[SIZE][SIZE], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", adjMat[i][j]);
        }
        printf("\n");
    }
}

void enqueue(int node){
    if(rear == SIZE){
        return;
    }
    queue[rear] = node;
    rear++;
    visited[node] = 1;
}

int dequeue(){
    if(rear == 0){
        return 0;
    }
    int node = queue[front];
    front++;
    return node;
}

void bfs(int adjMat[SIZE][SIZE], int n, int start){
    enqueue(start);
    while(front != rear){
        int current = dequeue();
        printf("%d ", current);

        for(int i = 0; i < n; i++){
            if(!visited[i] && adjMat[current][i]){
                enqueue(i);
            }
        }
    }
}

void main(){
    int adjMat[SIZE][SIZE] = {{0, 1, 0, 1, 0},
                              {0, 0, 1, 0, 1},
                              {1, 0, 0, 1, 0},
                              {0, 1, 0, 0, 1},
                              {1, 0, 1, 0, 0}};
    printAdjMat(adjMat, 5);
    printf("Breadth First Traversal:\n");
    bfs(adjMat, 5, 0);
}

////14) DFS Traversal of graphs
//
//#include<stdio.h>
//#define SIZE 100
//
//void dfs(int adjacencyMatrix[SIZE][SIZE], int n, int start){
//    int visited[SIZE] = {0};
//    int stack[SIZE] = {start};
//    int top = 0;
//    while(top >= 0){
//        int currentNode = stack[top];
//        top--;
//
//        if(!visited[currentNode]){
//            printf("%d ", currentNode);
//            visited[currentNode] = 1;
//
//            for(int i=0; i<n; i++){
//                if(!visited[i] && adjacencyMatrix[currentNode][i] == 1){
//                    stack[++top] = i;
//                }
//            }
//        }
//    }
//}
//
//void printAdjacencyMatrix(int adjacencyMatrix[SIZE][SIZE], int n){
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            printf("%d ", adjacencyMatrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void main(){
//    int adjMat[SIZE][SIZE] = {{0, 1, 0, 0, 0},
//                  {1, 0, 1, 0, 0},
//                  {0, 1, 0, 1, 0},
//                  {0, 0, 1, 0, 1},
//                  {0, 0, 0, 1, 0}};
//    printAdjacencyMatrix(adjMat, 5);
//    printf("Depth First Traversal:\n");
//    dfs(adjMat, 5, 0);
//}

////13) BFS Traversal of graphs
//
//#include<stdio.h>
//#define SIZE 100
//
//int visited[SIZE] = {0};
//int queue[SIZE];
//int front = 0, rear = 0;
//
//void printAdjacencyMatrix(int adjacencyMatrix[SIZE][SIZE], int n) {
//  for (int i = 0; i < n; i++) {
//    for (int j = 0; j < n; j++) {
//      printf("%d ", adjacencyMatrix[i][j]);
//    }
//    printf("\n");
//  }
//}
//
//void enqueue(int node){
//    if(rear == SIZE){
//        printf("Queue is full!\n");
//        return;
//    }
//    queue[rear] = node;
//    rear++;
//    visited[node] = 1;
//}
//
//int dequeue(){
//    if(front == rear){
//        printf("Queue is empty!\n");
//        return 0;
//    }
//    int node = queue[front];
//    front++;
//    return node;
//}
//
//void bfs(int adjacencyMatrix[SIZE][SIZE], int n, int start){
//    enqueue(start);
//    while(front!=rear){
//        int current = dequeue();
//        printf("%d ", current);
//
//        for(int i = 0; i < n; i++){
//            if(!visited[i] && adjacencyMatrix[current][i]){
//                enqueue(i);
//            }
//        }
//    }
//}
//
//
//void main(){
//    int adjMat[SIZE][SIZE] = {{0, 1, 0, 1, 0},
//                              {0, 0, 1, 0, 1},
//                              {1, 0, 0, 1, 0},
//                              {0, 1, 0, 0, 1},
//                              {1, 0, 1, 0, 0}};
//    printAdjacencyMatrix(adjMat, 5);
//    printf("Breadth First Traversal:\n");
//    bfs(adjMat, 5, 0);
//}
