#include<stdio.h>
#include<string.h>
typedef struct Person{
    // char name[20]; //20
    int age; //4
    char gen; //1
} Person; // --> 25

// typedef int hello;

void main(){
  Person puja={22,'f'};
  Person abhi={22,'m'};
//   puja.name="Puja Kumari";
    // strcpy(puja.name,"Puja Kumari");
//   abhi.name ="Abhi Mishra";
    puja.age = 22;
    abhi.age = 22;

    printf("puja name : %d\nabhi age : %d\npuja gen : %c,%c",puja.age,abhi.age,
    puja.gen,abhi.gen);
}