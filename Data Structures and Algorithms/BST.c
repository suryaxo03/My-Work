// BST insertion

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node* left;
    struct node* right;
}node;

node* createTree(int n){
    node* newNode = (node*)malloc(sizeof(node*));
    newNode->num = n;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node* insert(node* root, int n){
    if(root == NULL) return createTree(n);

    if(n < root->num){
        root->left = insert(root->left, n);
    }
    else if(n > root->num){
        root->right = insert(root->right, n);
    }
    return root;
}

node* search(node* root, int n){
    if(root == NULL || root->num == n){
        return root;
    }
    if(n < root->num){
        return search(root->num, n);
    }
    else if(n > root->num){
        return search(root->num, n);
    }
}

node* findMin(node* Node){
    while(Node->left != NULL){
        Node = Node->left;
    }
    return Node;
}

void inOrderTraversal(node* root){
    if(root != NULL){
        inOrderTraversal(root->left);
        printf("%d ", root->num);
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(node* root){
    if(root != NULL){
        printf("%d ", root->num);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(node* root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->num);
    }
}

int main(){
    node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 10);
    root = insert(root, 60);
    root = insert(root, 20);
    root = insert(root, 100);
    root = insert(root, 70);
    printf("In-Order traversal:\n");
    inOrderTraversal(root);
    printf("\nPre-Order traversal:\n");
    preOrderTraversal(root);
    printf("\nPost-Order traversal:\n");
    postOrderTraversal(root);
}
