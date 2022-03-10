#include<stdio.h>
main(){
    int x=5;
    void* a=&x;
    printf("%d\n",*(int*)a);
    char c='a';
    a=&c;
    printf("%c\n",*(char*)a);
    float f=3.4;
    a=&f;
    printf("%f\n",*(float*)a);
}