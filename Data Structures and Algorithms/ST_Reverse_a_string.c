// Reverse a string using stacks
#include<stdio.h>
#include<string.h>
#define SIZE 100

int top, stack[SIZE];

void push(char x){
    if(top==SIZE-1){
        printf("OVERFLOW!");
    }
    else{
        stack[++top] = x;
    }
}

void pop(){
    printf("%c", stack[top--]);
}

int main(){
    char str[] = "1234abc";
    int len = strlen(str);
    for(int i=0; i<len; i++){
        push(str[i]);
    }
    for(int i=0; i<len; i++){
        pop();
    }
    return 0;
}
