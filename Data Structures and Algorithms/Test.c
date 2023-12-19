////Begin Insert in single lonked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//	int num;
//	struct node* next;
//	}node;
//node* head = NULL;
//
//void begInsert(){
//	int n;
//	node* ptr = (node*)malloc(sizeof(node*));
//	if(ptr==NULL){
//		printf("MEMORY OVERFLOW!");
//		exit(0);
//	}
//	printf("Enter an integer: \n");
//	scanf("%d", &n);
//	ptr->num = n;
//	if(head == NULL){
//		head = ptr;
//		ptr->next = NULL;
//	}
//	else{
//		ptr->next = head;
//		head = ptr;
//	}
//}
//
//void display(){
//	node* ptr = (node*)malloc(sizeof(node*));
//	printf("Printing Values:\n");
//	ptr = head;
//	while(ptr != NULL){
//		printf("%d ", ptr->num);
//		ptr = ptr->next;
//	}
//}
//
//void main(){
//	int count;
//	printf("Enter the number of elements to be inserted:\n");
//	scanf("%d", &count);
//	for(int i=0; i<count; i++){
//		begInsert();
//	}
//	display();
//}

//// End insert in doubly linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//    struct node* prev;
//}node;
//
//node* head = NULL;
//
//void endInsertDL(){
//    int n;
//    node* temp;
//    node* ptr = (node*)malloc(sizeof(node*));
//
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    ptr->num = n;
//    if(head == NULL){
//        head = ptr;
//        ptr->next = NULL;
//        ptr->prev = NULL;
//    }
//    else{
//        temp = head;
//        while(temp->next != NULL){
//            temp = temp->next;
//        }
//        temp->next = ptr;
//        ptr->prev = temp;
//        ptr->next = NULL;
//    }
//}
//
//void display(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr = head;
//    printf("Printing Values:\n");
//    while(ptr!=NULL){
//        printf("%d ", ptr->num);
//        ptr = ptr->next;
//    }
//}
//
//void main(){
//    int count;
//    printf("Enter the number of elements to be inserted: ");
//    scanf("%d", &count);
//    for(int i=0; i<count; i++){
//        endInsertDL();
//    }
//    display();
//}

//// Random insert in circular linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//
//node* addToEmpty(node* last, int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    last = newNode;
//    last->next = newNode;
//    return last;
//}
//
//node* addBegin(node* last, int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    newNode->next = last->next;
//    last->next = newNode;
//    return last;
//}
//
//node* addEnd(node* last, int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    newNode->next = last->next;
//    last->next = newNode;
//    newNode = last;
//    return last;
//}
//
//node* addToAfter(node* last, int n, int item){
//    node* p;
//    p = last->next;
//    do{
//        if(p->num == item){
//            node* newNode = (node*)malloc(sizeof(node*));
//            newNode->num = n;
//            newNode->next = p->next;
//            p->next = newNode;
//            if(p == last) last = newNode;
//            return last;
//        }
//        p = p->next;
//    }while(p!=last->next);
//}
//
//node* begDelete(node* last){
//    if(last == NULL){
//        printf("Nothing to delete!\n");
//        return last;
//    }
//    else if(last == last->next){
//        free(last);
//        last = NULL;
//        return last;
//    }
//    else{
//        node* temp;
//        temp = last->next;
//        last->next = temp->next;
//        free(temp);
//        return last;
//    }
//}
//
//node* endDelete(node* last){
//    if(last == NULL){
//        printf("Nothing to delete!\n");
//        return last;
//    }
//    else if(last == last->next){
//        free(last);
//        last = NULL;
//        return last;
//    }
//    else{
//        node* temp;
//        temp = last->next;
//        while(temp->next != last){
//            temp = temp->next;
//        }
//        temp->next = last->next;
//        free(last);
//        last = temp;
//        return last;
//    }
//}
//
//node* randomDelete(node* last, int pos){
//    if(last == NULL){
//        printf("Nothing to delete!\n");
//        return last;
//    }
//    else if(last == last->next){
//        free(last);
//        last = NULL;
//        return last;
//    }
//    else{
//        node* temp = last->next;
//        while(pos > 2){
//            temp = temp->next;
//            pos--;
//        }
//        node* temp2 = temp->next;
//        temp->next = temp2->next;
//        if(last == temp2)
//            temp = last;
//        free(temp2);
//        temp2 = NULL;
//        return last;
//    }
//}
//node* displayCL(node* last){
//    node* p;
//    p = last->next;
//    printf("Printing Values:\n");
//    do{
//        printf("%d ", p->num);
//        p = p->next;
//    }while(p != last->next);
//}
//
//void main(){
//    node* last = NULL;
//    last = addToEmpty(last, 1);
//    last = addEnd(last, 2);
//    last = addEnd(last, 3);
//    last = addEnd(last, 4);
//    last = addEnd(last, 5);
//    last = addToAfter(last, 8, 3);
//    displayCL(last);
//    printf("\n");
//    last = begDelete(last);
//    last = endDelete(last);
//    last = randomDelete(last, 2);
//    displayCL(last);
//}

//// reversing a string using stacks
//
//#include<stdio.h>
//#include<string.h>
//#define SIZE 100
//
//int top, stack[SIZE];
//
//void push(char c){
//    if(top == SIZE-1){
//        printf("MEMORY OVERFLOW!");
//        exit(0);
//    }
//    else{
//        stack[++top] = c;
//    }
//}
//
//void pop(){
//    printf("%c", stack[top--]);
//}
//
//int main(){
//    char str[SIZE];
//    printf("Enter a string:\n");
//    scanf("%s", str);
//    int len = strlen(str);
//
//    for(int i=0; i<len; i++){
//        push(str[i]);
//    }
//
//    printf("Popping elements out of the stack:\n");
//
//    for(int i=0; i<len; i++){
//        pop();
//    }
//    return 0;
//}

//// Infix to postfix
//
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 100
//
//typedef struct Stack{
//    int top;
//    char items[SIZE];
//}Stack;
//
//int isEmpty(Stack* stack){
//    return stack->top == -1;
//}
//
//void push(Stack* stack, char item){
//    if(stack->top == SIZE-1){
//        printf("MEMORY OVERFLOW!");
//        exit(0);
//    }
//    stack->items[++stack->top] = item;
//}
//
//char pop(Stack* stack){
//    if(stack->top == -1){
//        printf("MEMORY UNDERFLOW!");
//        exit(0);
//    }
//    return stack->items[stack->top--];
//}
//
//int isOperator(char ch){
//    return(ch == '+'|| ch == '-' || ch == '*' || ch == '/');
//}
//
//int precedence(char ch){
//    if(ch == '+' || ch == '-') return 1;
//    if(ch == '*' || ch == '/') return 2;
//    return 0;
//}
//
//void infixToPostfix(char* infix){
//    Stack stack;
//    stack.top = -1;
//    printf("Postfix Expression: ");
//    for(int i=0; i<strlen(infix); i++){
//        char c = infix[i];
//        if(isalnum(c)){
//            printf("%c", c);
//        }
//        else if(c == '('){
//            push(&stack, c);
//        }
//        else if(c == ')'){
//            while(!isEmpty(&stack) && stack.items[stack.top] != '('){
//                printf("%c", pop(&stack));
//            }
//            if(!isEmpty(&stack) && stack.items[stack.top] != '('){
//                printf("Invalid Expression!\n");
//                exit(1);
//            }
//            else{
//                pop(&stack);
//            }
//        }
//        else{
//            while(!isEmpty(&stack) && precedence(c) <= precedence(stack.items[stack.top])){
//                printf("%c", pop(&stack));
//            }
//            push(&stack, c);
//        }
//    }
//    while(!isEmpty(&stack)){
//        printf("%c", pop(&stack));
//    }
//    printf("\n");
//}
//
//int main(){
//    char infix[SIZE];
//    printf("Enter an infix expression: ");
//    scanf("%s", infix);
//    infixToPostfix(infix);
//    return 0;
//}
//
//// Infix to Postfix
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 100
//
//typedef struct Stack{
//    int top;
//    char items[SIZE];
//}Stack;
//
//int isEmpty(Stack* stack){
//    return stack->top == -1;
//}
//void push(Stack* stack ,char item){
//    if(stack->top == SIZE-1){
//        printf("MEMORY OVERFLOW!");
//        exit(0);
//    }
//    stack->items[++stack->top] = item;
//}
//
//char pop(Stack* stack){
//    if(stack->top == -1){
//        printf("MEMORY UNDERFLOW!");
//        exit(0);
//    }
//    return stack->items[stack->top--];
//}
//
//int isOperator(char ch){
//    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
//}
//
//int precedence(char ch){
//    if(ch == '+' || ch == '-') return 1;
//    if(ch == '*' || ch == '/') return 2;
//    return 0;
//}
//
//void infixToPostfix(char* infix){
//    Stack *stack;
//    stack->top = -1;
//    printf("Postfix Expression:\n");
//
//    for(int i=0; i<strlen(infix); i++){
//        char ch = infix[i];
//        if(isalnum(ch)){
//            printf("%c", ch);
//        }
//        else if(ch == '('){
//            push(stack, ch);
//        }
//        else if(ch == ')'){
//            while(!isEmpty(stack) && stack->items[stack->top] != '('){
//                printf("%c", pop(stack));
//            }
//            if(!isEmpty(stack) && stack->items[stack->top] != '('){
//                printf("INVLAID EXPRESSION!");
//                exit(1);
//            }
//            else{
//                pop(stack);
//            }
//        }
//        else{
//            while(!isEmpty(stack) && precedence(ch) <= precedence(stack->items[stack->top])){
//                printf("%c", pop(stack));
//            }
//            push(stack, ch);
//        }
//    }
//    while(!isEmpty(stack)){
//            printf("%c", pop(stack));
//    }
//}
//
//void main(){
//    char str[SIZE];
//    printf("Enter the infix expression:\n");
//    scanf("%s", str);
//    infixToPostfix(str);
//}

//// Printer job using queues
//
//#include<stdio.h>
//#include<string.h>
//#define SIZE 100
//
//char queue[SIZE][100];
//int front = -1, rear = -1;
//
//void enqueue(char* docName){
//    if(rear == SIZE-1){
//        printf("Can't enqueue %s, as the queue is full!", docName);
//    }
//    else{
//        if(front == -1){
//            front = 0;
//        }
//        rear = rear+1;
//        strcpy(queue[rear], docName);
//        printf("%s is enqueued!\n", queue[rear]);
//    }
//}
//
//void dequeue(){
//    if(front == -1){
//        printf("Nothing to dequeue, queue is empty!");
//    }
//    else{
//        printf("%s is dequeued!\n", queue[front]);
//        front = front+1;
//        if(front > rear){
//            front = -1;
//            rear = -1;
//        }
//    }
//}
//
//void printQueue(){
//    if(rear == -1){
//        printf("Nothing to print, queue is void!");
//    }
//    else{
//        printf("Printing the documents:\n");
//        for(int i=front; i<=rear; i++){
//            printf("%s ", queue[i]);
//        }
//    }
//    printf("\n");
//}
//void main(){
//    int n;
//    printf("Enter the number of documents to be printed:\n");
//    scanf("%d", &n);
//    char str[100];
//    for(int i=0; i<n; i++){
//        printf("Enter the document %d to be printed:\n", i+1);
//        scanf("%s", str);
//        enqueue(str);
//    }
//    printf("Queue before dequeue:\n");
//    printQueue();
//    for(int i=0; i<n; i++){
//        dequeue();
//    }
//    printf("Queue after dequeue:\n");
//    printQueue();
//}

//// BST Insertion Traversal
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
//node* insert(node* root, int n){
//    if(root == NULL) return createTree(n);
//
//    if(n < root->num){
//        root->left = insert(root->left, n);
//    }
//    else if(n > root->num){
//        root->right = insert(root->right, n);
//    }
//    return root;
//}
//
//node* search(node* root, int n){
//    if(root == NULL || root->num == n){
//        return root;
//    }
//    else if(n < root->num){
//        return search(root->left, n);
//    }
//    else if(n > root->num){
//        return search(root->right, n);
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
//    if(root!=NULL){
//    inOrderTraversal(root->left);
//    printf("%d ", root->num);
//    inOrderTraversal(root->right);
//    }
//}
//
//void preOrderTraversal(node* root){
//    if(root!=NULL){
//    printf("%d ", root->num);
//    preOrderTraversal(root->left);
//    preOrderTraversal(root->right);
//    }
//}
//
//void postOrderTraversal(node* root){
//    if(root!=NULL){
//    postOrderTraversal(root->left);
//    postOrderTraversal(root->right);
//    printf("%d ", root->num);
//    }
//}
//
//void main(){
//    node* root;
//    root = insert(root, 50);
//    root = insert(root, 60);
//    root = insert(root, 40);
//    root = insert(root, 90);
//    root = insert(root, 20);
//    root = insert(root, 10);
//    root = insert(root, 70);
//
//    printf("\nIn Order Traversal:\n");
//    inOrderTraversal(root);
//    printf("\nPre Order Traversal:\n");
//    preOrderTraversal(root);
//    printf("\nPost Order Traversal:\n");
//    postOrderTraversal(root);
//}

// DFS Traversal
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
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
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
//    dfs(adjMat, 5, 0);
//}
//
// BFS traversal
//
//#include<stdio.h>
//#define SIZE 100
//
//int visited[SIZE] = {0};
//int queue[SIZE];
//int front = 0, rear = 0;
//
//void printAdjacencyMatrix(int adjacencyMatrix[SIZE][SIZE], int n){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            printf("%d ", adjacencyMatrix[i][j]);
//        }
//        printf("\n");
//    }
//}
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
//        for(int i=0; i<n; i++){
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
//    bfs(adjMat, 5, 0);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct node{
//    int data;
//    struct node *next;
//};
//struct node* addtoempty(struct node *last, int item)
//{
//    if(last!=NULL)return last;
//    struct node *newnode=(struct node *)malloc(sizeof(struct node*));
//    newnode->data=item;
//    newnode=last;
//    last->next=last;
//    return last;
//}
//struct node *addtobegin(struct node* last, int data)
//{
//    if(last==NULL)return addtobegin(last,data);
//    struct node *newnode=(struct node *)malloc(sizeof(struct node*));
//    newnode->data=data;
//    newnode->next=last->next;
//    last->next=newnode;
//    return last;
//}
//struct node *addtolast(struct node* last, int data)
//{
//    if(last==NULL)return addtolast(last,data);
//    struct node *newnode=(struct node *)malloc(sizeof(struct node*));
//    newnode->data=data;
//    newnode->next=last->next;
//    last->next=newnode;
//    last=newnode;
//    return last;
//}
//struct node *addtorandom(struct node* last, int data, int item)
//{
//    if(last==NULL)return NULL;
//    struct node *p,newnode;
//    p=last->next;
//    do{
//            if(p->data=item){
//              struct node *newnode=(struct node*)malloc(sizeof(struct node*));
//              newnode->data=item;
//              newnode->next=p->next;
//              p->next=newnode;
//              if(p==last)last=newnode;
//              return last;
//            }
//            p=p->next;
//    }
//    while(p!=last->next);
//    printf("given node is not present in the list");
//    return last;
//}
//void traverse(struct node *last)
//{
//    struct node *p;
//    if(last==NULL)
//    {
//        printf("list is empty");
//        return;
//    }
//    p=last->next;
//    do
//    {
//        printf("%d",p->data);
//        p=p->next;
//    }
//    while(p!=last->next);
//}
//struct node *delfirst(struct node *last)
//{
//    if(last==NULL)
//        return last;
//    if(last->next=last)
//    {
//        free(last);
//        last=NULL;
//        return last;
//    }
//    struct node *temp=last->next;
//    last->next=temp->next;
//    free(temp);
//    temp=NULL;
//    return last;
//
//}
//struct node *delend(struct node *last)
//{
//    if(last==NULL)
//        return last;
//    if(last->next=last)
//    {
//        free(last);
//        last=NULL;
//        return last;
//    }
//    struct node *temp=last->next;
//    while(temp->next!=NULL)
//    {
//        temp=temp->next;
//    }
//    temp->next=last->next;
//    free(last);
//    last=temp;
//    return last;
//}
//struct node *delrandom(struct node *last,int pos)
//{
//    struct node *temp1=last->next;
//    while(pos>2){
//            temp1=temp1->next;
//            pos--;
//    }
//    struct node *temp2=temp1->next;
//    temp1->next=temp2->next;
//    if(last==temp2)
//    {
//        temp1=last;
//    }
//    free(temp2);
//    temp2=NULL;
//    return last;
//}
//void main()
//{
//    struct node* last = NULL;
//    last = addtobegin(last, 2);
//    last = addtobegin(last, 3);
//    last = addtolast(last, 4);
//    last = addtolast(last, 5);
//    last = addtolast(last, 6);
//    last = addtorandom(last, 7,2);
//    traverse(last);
//    last = delfirst(last);
//    last = delend(last);
//    last = delrandom(last, 3);
//    traverse(last);
//}

#include <stdio.h>
#include <stdlib.h>
struct node {
    int item;
    struct node *left;
    struct node *right;
};
struct node *createnode(int value)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->item=value;
    newnode->left=NULL;
    newnode->right=NULL;
}
struct node *insertleft(struct node *root,int value)
{
    root->left=createnode(value);
    return root->left;
}
struct node *insertright(struct node *root,int value)
{
    root->right=createnode(value);
    return root->right;
}
void inordertraversal(struct node *root)
{
    if(root==NULL)return;
    inordertraversal(root->left);
    printf("%d",root->item);
    inordertraversal(root->right);
}
void preordertraversal(struct node *root)
{
    if(root==NULL)return;
    printf("%d",root->item);
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(struct node *root)
{
    if(root==NULL)return;
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf("%d",root->item);
}
struct node *search(struct node *root,int value)
{
    if(root==NULL)return root;
    if(root->item==value){
        return root;
    }
    else if(root->item<value){
            return search(root->right,value);
    }
    else{
        return search(root->left,value);
    }

}
struct node *delnode(struct node *root,int value)
{
    if(root==NULL)return root;
    if(root->item>value){
            root->left=delnode(root->left,value);
            return root;
    }
    else if(root->item<value){
            root->right=delnode(root->right,value);
            return root;
    }
    if(root->left==NULL){
            struct node *newnode=root->right;
            free(root);
            return newnode;
    }
    if(root->right==NULL){
            struct node *newnode=root->left;
            free(root);
            return newnode;
    }
    else{
            struct node *succparent=root;
            struct node *succ=root->right;
            while(succ->left!=NULL){
                    succparent=succ;
                    succ=succ->left;
            }
            if(succparent!=root){
                    succparent->left=succ->right;
            }
            else{
                succparent->right=succ->right;
            }
            root->item=succ->item;
            free(succ);
            return root;
    }
}
void main(){
    int value;
    printf("\nEnter value: ");
    scanf("%d",&value);
    struct node *root = createnode(value);
    printf("\nEnter value: ");
    scanf("%d",&value);
    insertleft(root,value);

    printf("\nEnter value: ");
    scanf("%d",&value);
    insertright(root,value);

    printf("\nEnter value: ");
    scanf("%d",&value);
    insertleft(root->left,value);

    printf("\nEnter value: ");
    scanf("%d",&value);
    insertright(root->left,value);

    printf("\nEnter value: ");
    scanf("%d",&value);
    insertleft(root->right,value);
     printf("\nEnter value: ");
    scanf("%d",&value);
    insertright(root->right,value);

    printf("Inorder Traversal of tree: \n");
    inordertraversal(root);

    printf("\nEnter value: ");
    scanf("%d",&value);

    if(search(root,value) == NULL){
        printf("%d not found\n",value);
    }

    else{
        printf("%d is found\n",value);
    }
      int key;
    printf("enter value to be deleted: ");
    scanf("%d",&key);

    delnode(root,key);

    printf("After deletion: \n");
    inordertraversal(root);
}
