#include<stdio.h>
int main(){

    char a,*ptr;
    char* ptr,ptr1,ptr2;
    char* ptr = &a;
    char** pPtr=&ptr;
    printf("var : a , val : %c , adress : %p, value at ptr : %c\n",a,ptr,*ptr);

    return 0;
}