#include<stdio.h>
#include<stdlib.h>

int add(int a,int b){    
    return a+b;
}

int main(){
    int (*fxnPointer)(int a,int b)=&add;
    printf("%d",fxnPointer(5,6));
}


