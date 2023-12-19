// Passing a pointer to an array
#include<stdio.h>

int main(){
    int arr[5], *ptr;

    printf("Enter the elements of the array:");

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    ptr = &arr[0];
    printf("Elements of the array are passed using the ptr:\n");
    for(int i=0; i<5; i++){
        printf("%d ", *(ptr+i));
    }
    return 0;
}
