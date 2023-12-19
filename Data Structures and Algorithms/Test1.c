//// 1) Passing a pointer to an array
//#include<stdio.h>
//
//void printArray(int *arr, int size){
//    for(int i = 0; i < size; i++){
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void main(){
//    int arr[] = {1, 2, 3, 4, 5};
//    int size = sizeof(arr)/sizeof(arr[0]);
//
//    printArray(arr, size);
//}

////2) Insertion at beginning, end, and random location in a linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    struct node* next;
//    int num;
//}node;
//
//node* head = NULL;
//
//void begInsert(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!");
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
//        ptr->next = head;
//        head = ptr;
//        printf("Node begInserted!\n");
//    }
//}
//
//void endInsert(){
//    node* temp;
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!");
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
//void randomInsert(){
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
//    printf("Enter the location where %d to be inserted:\n", n);
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
//void display(){
//    node* ptr = (node*)malloc(sizeof(node*));
//    ptr = head;
//    if(ptr == NULL){
//        printf("Nothing to print!\n");
//        return;
//    }
//    printf("Printing Values:\n");
//    while(ptr != NULL){
//        printf("%d->", ptr->num);
//        ptr = ptr->next;
//    }
//    printf("NULL\n");
//}
//void main(){
//    begInsert();
//    begInsert();
//    begInsert();
//    endInsert();
//    endInsert();
//    endInsert();
//    randomInsert();
//    display();
//}

//// 3) Reversing a linekd list
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
//void printLL(node* head){
//    while(head != NULL){
//        printf("%d->", head->num);
//        head = head->next;
//    }
//    printf("NULL\n");
//}
//
//void main(){
//    node* head = NULL;
//    int count;
//    printf("Enter number of nodes:\n");
//    scanf("%d", &count);
//    for(int i = 0; i < count; i++){
//        node* newNode = (node*)malloc(sizeof(node*));
//        printf("Enter node %d:\n", i+1);
//        scanf("%d", &newNode->num);
//        newNode->next = head;
//        head = newNode;
//    }
//    printf("Given Linked List:\n");
//    printLL(head);
//    head = reverse(head);
//    printf("Reversed Linked List:\n");
//    printLL(head);
//    getchar();
//}

////4) Merging two linked lists
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//
//void insert(node** head, int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    newNode->next = NULL;
//
//    if (*head == NULL){
//        *head = newNode;
//    }
//    else{
//        node* temp = *head;
//        while (temp->next != NULL){
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//}
//
//node* mergeLists(node* list1, node* list2){
//    node* mergedList = NULL;
//
//    if(list1 == NULL){
//        return list2;
//    }
//    else if(list2 == NULL){
//        return list1;
//    }
//
//    if(list1->num <= list2->num){
//        mergedList = list1;
//        mergedList->next = mergeLists(list1->next, list2);
//    }
//    else{
//        mergedList = list2;
//        mergedList->next = mergeLists(list1, list2->next);
//    }
//
//    return mergedList;
//}
//
//void printList(node* head){
//    while(head != NULL){
//        printf("%d -> ", head->num);
//        head = head->next;
//    }
//    printf("NULL\n");
//}
//
//void main(){
//    node* list1 = NULL;
//    node* list2 = NULL;
//
//    insert(&list1, 1);
//    insert(&list1, 3);
//    insert(&list1, 5);
//
//    insert(&list2, 2);
//    insert(&list2, 4);
//    insert(&list2, 6);
//
//    printf("First Linked List: ");
//    printList(list1);
//
//    printf("Second Linked List: ");
//    printList(list2);
//
//    node* mergedList = mergeLists(list1, list2);
//    printf("Merged Linked List: ");
//    printList(mergedList);
//
//    node* temp;
//    while (mergedList != NULL) {
//        temp = mergedList;
//        mergedList = mergedList->next;
//        free(temp);
//    }
//}

////5) Inserting at the beginning, end, random position in a doubly linked list
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
//void begInsertDL(){
//    int n;
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!");
//        return;
//    }
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
//    int n;
//    node* ptr = (node*)malloc(sizeof(node*));
//    if(ptr == NULL){
//        printf("MEMORY OVERFLOW!");
//        return;
//    }
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
//        node* temp;
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
//    node* temp;
//    int n, loc;
//    printf("Enter an integer:\n");
//    scanf("%d", &n);
//    printf("Enter the location to insert %d:\n", n);
//    scanf("%d", &loc);
//    temp = head;
//    ptr->num = n;
//    for(int i = 1; i < loc-1; i++){
//        temp = temp->next;
//        if(temp == NULL)
//            return;
//    }
//    ptr->next = temp->next;
//    ptr->prev = temp;
//    temp->next = ptr;
//    temp->next->prev = ptr;
//}
//
//void displayDL(){
//    node* ptr;
//    ptr = head;
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

////6) Insertion at beginning, end, random location in a circular linked list
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
//    if(last != NULL)
//        return last;
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    last = newNode;
//    newNode->next = last;
//    return last;
//}
//
//node* begInsertCL(node* last, int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    if(last == NULL)
//        return addToEmpty(last, n);
//    newNode->next = last->next;
//    last->next = newNode;
//    return last;
//}
//
//node* endInsertCL(node* last, int n){
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    if(last == NULL)
//        return addToEmpty(last, n);
//    newNode->next = last->next;
//    last->next = newNode;
//    last = newNode;
//    return last;
//}
//
//node* randomInsertCL(node* last, int n, int item){
//    node* p;
//    p = last->next;
//
//    do{
//        if(p->num == item){
//            node* newNode = (node*)malloc(sizeof(node*));
//            newNode->num = n;
//            newNode->next = p->next;
//            p->next = newNode;
//            if(p == last)
//                last = newNode;
//            return last;
//        }
//        p = p->next;
//    }while(p != last->next);
//    printf("%d is not in the given linked list!\n", item);
//    return last;
//}
//
//void displayCL(node* last){
//    if(last == NULL){
//        printf("Nothing to print!\n");
//        return;
//    }
//    node* p;
//    p = last->next;
//    printf("Printing Values:\n");
//    do{
//        printf("%d->", p->num);
//        p = p->next;
//    }while(p != last->next);
//    printf("NULL\n");
//}
//
//void main(){
//    node* last = NULL;
//    last = begInsertCL(last, 2);
//    last = begInsertCL(last, 3);
//    last = endInsertCL(last, 4);
//    last = endInsertCL(last, 5);
//    last = endInsertCL(last, 6);
//    last = randomInsertCL(last, 7, 2);
//    displayCL(last);
//}
//
////7) Deletion at beginning, end and random element of a circular linked list
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    struct node* next;
//    int num;
//}node;
//
//node* addToEmpty(node* last, int n){
//    if(last != NULL)
//        return last;
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    last = newNode;
//    last->next = newNode;
//    return last;
//}
//
//node* begInsertCL(node* last, int n){
//    if(last == NULL)
//        return addToEmpty(last, n);
//    node* newNode = (node*)malloc(sizeof(node*));
//    newNode->num = n;
//    newNode->next = last->next;
//    last->next = newNode;
//    return last;
//}
//
//node* begDeleteCL(node* last){
//    if(last == NULL){
//        printf("List is Empty!");
//        return NULL;
//    }
//    if(last == last->next){
//        free(last);
//        last = NULL;
//        return last;
//    }
//    node* temp;
//    temp = last->next;
//    last->next = temp->next;
//    free(temp);
//    return last;
//}
//
//node* endDeleteCL(node* last){
//    if(last == NULL){
//        printf("List is Empty!");
//        return NULL;
//    }
//    if(last == last->next){
//        free(last);
//        last = NULL;
//        return last;
//    }
//    node* temp;
//    temp = last->next;
//    while(temp->next != last){
//        temp = temp->next;
//    }
//    temp->next = last->next;
//    free(last);
//    last = temp;
//    return last;
//}
//
//node* randomDeleteCL(node* last, int pos){
//    node* temp1 = last->next;
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
//void displayCL(node* last){
//    if(last == NULL){
//        printf("Nothing to print!\n");
//        return NULL;
//    }
//    node* p;
//    p = last->next;
//    do{
//        printf("%d->", p->num);
//        p = p->next;
//    }while(p != last->next);
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
//    displayCL(last);
//    last = begDeleteCL(last);
//    last = endDeleteCL(last);
//    last = randomDeleteCL(last, 3);
//    displayCL(last);
//}

////8) Infix expression to Postfix expression
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
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
//        printf("STACK OVERFLOW!\n");
//        return;
//    }
//    stack->items[++stack->top] = item;
//}
//
//char pop(Stack* stack){
//    return stack->items[stack->top--];
//}
//
//int isOperator(char ch){
//    return(ch == '+' || ch == '-' || ch == '*' || ch == '/');
//}
//
//int precedence(char ch){
//    if(ch == '+' || ch == '-')
//        return 1;
//    if(ch == '*' || ch == '/')
//        return 2;
//    return 0;
//}
//
//void infixToPostfix(char* infix){
//    Stack* stack;
//    stack->top = -1;
//    printf("Postfix Expression: ");
//    int len = strlen(infix);
//    for(int i = 0; i < len; i++){
//        char c = infix[i];
//        if(isalnum(c)){
//            printf("%c", c);
//        }
//        else if(c == '('){
//            push(stack, c);
//        }
//        else if(c == ')'){
//            while(!isEmpty(stack) && stack->items[stack->top] != '('){
//                printf("%c", pop(stack));
//            }
//            if(!isEmpty(stack) && stack->items[stack->top] != '('){
//                printf("Invalid Expression!\n");
//                return;
//            }
//            else{
//                pop(stack);
//            }
//        }
//        else{
//            while(!isEmpty(stack) && precedence(c) <= precedence(stack->items[stack->top])){
//                printf("%c", pop(stack));
//            }
//            push(stack, c);
//        }
//    }
//    while(!isEmpty(stack)){
//        printf("%c", pop(stack));
//    }
//    printf("\n");
//}

//void main(){
//    char infix[SIZE];
//    printf("Enter the infix expression:\n");
//    scanf("%s", infix);
//    printf("Infix Expression: %s\n", infix);
//    infixToPostfix(infix);
//}

////9) Reverse a string using stacks
//#include<stdio.h>
//#include<string.h>
//#define SIZE 100
//
//int top, stack[SIZE];
//
//void push(char c){
//    if(top == SIZE-1){
//        printf("STACK OVERFLOW!\n");
//        return;
//    }
//    stack[++top] = c;
//}
//
//void pop(){
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
//    printf("\n");
//}


////10) Printer jobs using queues
//#include<stdio.h>
//#include<string.h>
//#define SIZE 100
//
//char queue[SIZE][SIZE];
//int front = -1, rear = -1;
//
//void enqueue(char* documentName){
//    if(rear == SIZE-1){
//        printf("Can't insert %s, queue is full!\n", documentName);
//        return;
//    }
//
//    if(front == -1){
//        front = 0;
//    }
//    rear = rear + 1;
//    strcpy(queue[rear], documentName);
//    printf("%s is enqueued from printing operation!\n", queue[rear]);
//}
//
//void dequeue(){
//    if(front == -1){
//        printf("Nothing to dequeue, queue is empty!\n");
//        return;
//    }
//    printf("%s is dequeued and being printed!\n", queue[front]);
//    front = front + 1;
//    if(front > rear){
//        front = -1;
//        rear = -1;
//    }
//}
//
//void printQueue(){
//    if(rear == -1){
//        printf("Nothing to print, queue is empty!\n");
//        return;
//    }
//    printf("Documents in queue:\n");
//    for(int i = front; i < rear; i++){
//        printf("%s", queue[i]);
//    }
//    printf("\n");
//}
//
//void main(){
//    int count;
//    char str[SIZE];
//    printf("Enter the number of documents to be printed:\n");
//    scanf("%d", &count);
//    for(int i = 0; i < count; i++){
//        printf("Enter document %d: ", i+1);
//        scanf("%s", str);
//        enqueue(str);
//    }
//    printf("Queue of documents to be printed:\n");
//    printQueue();
//    for(int i = 0; i < count; i++){
//        dequeue();
//    }
//    printf("Queue after dequeue:\n");
//    printQueue();
//}

////11) Insertion, Searching for, and Deletion of a node in a Binary Search Tree
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
//    if(root == NULL)
//        return createTree(n);
//
//    if(n < root->num)
//        root->left = insert(root->left, n);
//
//    else if(n > root->num)
//        root->right = insert(root->right, n);
//
//    return root;
//}
//
//node* search(node* root, int n){
//    if(root == NULL || root->num == n)
//        return root;
//
//    if(n < root->num)
//        return search(root->left, n);
//
//    else if(n > root->num)
//        return search(root->right, n);
//}
//
//node* findMin(node* Node){
//    while(Node->left != NULL)
//        Node = Node->left;
//    return Node;
//}
//
//node* deleteNode(node* root, int n){
//    if(root == NULL)
//        return root;
//
//    if(n < root->num){
//        root->left = deleteNode(root->left, n);
//        return root;
//    }
//    else if(n > root->num){
//        root->right = deleteNode(root->right, n);
//        return root;
//    }
//
//    if(root->left == NULL){
//        node* temp = root->right;
//        free(root);
//        return temp;
//    }
//    else if(root->right == NULL){
//        node* temp = root->left;
//        free(root);
//        return temp;
//    }
//    else{
//        node* successorParent = root;
//        node* successor = root->right;
//
//        while(successor->left != NULL){
//            successorParent = successor;
//            successor = successor->left;
//        }
//
//        if(successorParent != root)
//            successorParent->left = successor->right;
//        else
//            successorParent->right = successor->right;
//
//        root->num = successor->num;
//        free(successor);
//        return root;
//    }
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
//
//void main(){
//    node* root = NULL;
//    root = insert(root, 50);
//    root = insert(root, 30);
//    root = insert(root, 20);
//    root = insert(root, 40);
//    root = insert(root, 70);
//    root = insert(root, 60);
//
//    printf("In Order Traversal: ");
//    inOrderTraversal(root);
//    printf("\n");
//
//    int searchKey = 100;
//    node* searchResult = search(root, searchKey);
//    if(searchResult){
//        printf("Key %d is found in the Binary Search Tree!\n", searchKey);
//    }
//    else{
//        printf("Key %d is not found in the Binary Search Tree!\n", searchKey);
//    }
//    int deleteKey = 70;
//    root = deleteNode(root, deleteKey);
//    printf("In Order Traversal after deleting %d: ", deleteKey);
//    inOrderTraversal(root);
//    printf("\n");
//}

////12) Traversal methods in Binary Search Tree
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
//    if(root == NULL)
//        return createTree(n);
//
//    if(n < root->num)
//        root->left = insert(root->left, n);
//
//    else if(n > root->num)
//        root->right = insert(root->right, n);
//
//    return root;
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
//void levelOrderTraversal(node* root){
//    int height = getHeight(root);
//    for(int i = 1; i < height+1; i++){
//        currentLevel(root, i);
//    }
//}
//
//void currentLevel(node* root, int level){
//    if(root != NULL){
//        if(level == 1){
//            printf("%d ", root->num);
//        }
//        else if(level > 1){
//            currentLevel(root->left, level - 1);
//            currentLevel(root->right, level - 1);
//        }
//    }
//}
//
//int getHeight(node* root){
//    if(root != NULL){
//        int leftHeight = getHeight(root->left);
//        int rightHeight = getHeight(root->right);
//
//        if(leftHeight > rightHeight){
//            return (leftHeight+1);
//        }
//        else{
//            return (rightHeight+1);
//        }
//    }
//}
//
//void main(){
//    node* root = NULL;
//    root = insert(root, 50);
//    root = insert(root, 30);
//    root = insert(root, 20);
//    root = insert(root, 40);
//    root = insert(root, 70);
//    root = insert(root, 60);
//
//    printf("In Order Traversal: ");
//    inOrderTraversal(root);
//    printf("\n");
//    printf("Pre Order traversal: ");
//    preOrderTraversal(root);
//    printf("\n");
//    printf("Post Order Traversal: ");
//    postOrderTraversal(root);
//    printf("\n");
//    printf("Level Order Traversal: ");
//    levelOrderTraversal(root);
//    printf("\n");
//}

//13) BFS Traversal of graphs

#include<stdio.h>
#define SIZE 100

int visited[SIZE] = {0};
int queue[SIZE];
int front = 0, rear = 0;

void printAdjacencyMatrix(int adjacencyMatrix[SIZE][SIZE], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", adjacencyMatrix[i][j]);
    }
    printf("\n");
  }
}

void enqueue(int node){
    if(rear == SIZE){
        printf("Queue is full!\n");
        return;
    }
    queue[rear] = node;
    rear++;
    visited[node] = 1;
}

int dequeue(){
    if(front == rear){
        printf("Queue is empty!\n");
        return 0;
    }
    int node = queue[front];
    front++;
    return node;
}

void bfs(int adjacencyMatrix[SIZE][SIZE], int n, int start){
    enqueue(start);
    while(front!=rear){
        int current = dequeue();
        printf("%d ", current);

        for(int i = 0; i < n; i++){
            if(!visited[i] && adjacencyMatrix[current][i]){
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
    printAdjacencyMatrix(adjMat, 5);
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

////15) Sorting of a linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node{
//    int num;
//    struct node* next;
//}node;
//// Bubble sort algorithm to sort a linked list
//void bubbleSort(node *head){
//    node *current = head;
//    node *index = NULL;
//
//    while(current != NULL){
//        index = current->next;
//
//        while (index != NULL){
//            if(current->num > index->num){
//            int temp = current->num;
//            current->num = index->num;
//            index->num = temp;
//        }
//        index = index->next;
//    }
//    current = current->next;
//  }
//}
//
//void printList(node *head){
//    node *current = head;
//
//    while (current != NULL){
//        printf("%d ", current->num);
//        current = current->next;
//    }
//
//    printf("\n");
//}
//
//node *newNode(int n) {
//    node *Node = (node*)malloc(sizeof(node*));
//    Node->num = n;
//    Node->next = NULL;
//
//    return Node;
//}
//
//void main() {
//    node *head = newNode(30);
//    head->next = newNode(10);
//    head->next->next = newNode(40);
//    head->next->next->next = newNode(20);
//    head->next->next->next->next = newNode(50);
//    printf("Linked List before sorting:\n");
//    printList(head);
//
//    bubbleSort(head);
//    printf("Linked List after sorting:\n");
//    printList(head);
//}
