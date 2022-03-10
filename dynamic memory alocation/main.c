#include<stdio.h>
#include<stdlib.h>

int g=10; //global space
int main(void){
    // int a=5; //stack space 
    // int a[5];
    // sizeof(int) --> 4 byte ==> 5*4==20byte
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(sizeof(int)*n);
    // int* arr = (int*)calloc(sizeof(int),n);
    // for(int i=0;i<n;i++){
    //     arr[i]=i;
    // }
    for(int i=0;i<n;i++){
       printf("%d  ",arr[i]);
    }
    // memory leak prevention
    free(arr);
    // ptr1 --> 1 2 3
    // ptr2 --> 4 5 6
    // ptr3 --> 7 8 9


    // ptr --> [ptr1 ,ptr2, ptr3]
}


// memory : -

// 100 200 300 400 500 

// fixed size 
// 2.stack Space --> temp : for locals
// 1.Global Space --> temp : global

// not fixed : perm
// 3.heap space











