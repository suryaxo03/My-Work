#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

typedef struct Stack{
    int top;
    char items[SIZE];
}Stack;

int isEmpty(Stack* stack){
    return stack->top == -1;
}

void push(Stack* stack, char item){
    if(stack->top == SIZE-1){
        printf("OVERFLOW!");
        exit(1);
    }
    stack->items[++stack->top] = item;
}

char pop(Stack* stack){
    if(isEmpty(stack)){
        printf("UNDERFLOW!");
        exit(1);
    }
    return stack->items[stack->top--];
}

int isOperator(char ch){
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(char ch){
    if(ch == '+' || ch == '-') return 1;
    if(ch == '*' || ch == '/') return 2;
    return 0;
}

void infixToPostfix(char* infix){
    Stack stack;
    stack.top = -1;
    printf("Postfix Expression: ");
    for(int i=0; i<strlen(infix); i++){
        char c = infix[i];
        if(isalnum(c)){
            printf("%c", c);
        }
        else if(c == '('){
            push(&stack, c);
        }
        else if(c == ')'){
            while(!isEmpty(&stack) && stack.items[stack.top] != '('){
                printf("%c", pop(&stack));
            }
            if(!isEmpty(&stack) && stack.items[stack.top] != '('){
                printf("Invalid Expression!\n");
                exit(1);
            }
            else{
                pop(&stack);
            }
        }
        else{
            while(!isEmpty(&stack) && precedence(c) <= precedence(stack.items[stack.top])){
                printf("%c", pop(&stack));
            }
            push(&stack, c);
        }
    }
    while(!isEmpty(&stack)){
        printf("%c", pop(&stack));
    }
    printf("\n");
}

int main(){
    char infix[SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix);
    return 0;
}
