#include<stdio.h>

// void swap(int *a,int *b);
void swap(int* a, int *b);

int main(){

    int a,b;

    printf("Swap using call by reference \n");

    printf("Enter two number: \n");
    scanf("%d \n",&a);
    scanf("%d",&b);

    swap(&a,&b);

    printf("In main: a : %d , b : %d \n", a,b);

    return 0;

}

void swap(int *a,int *b){

    int extra = *a;
    *a = *b;
    *b = extra;

    printf("In function : a : %d , b : %d \n", *a,*b);

}
