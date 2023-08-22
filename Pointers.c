#include<stdio.h>

// Pointer - A Variable that stores the memory address of another variable

int main() {

int a = 10;
int *ptr = &a;

printf("%d \n", *ptr);

printf("%p \n", *ptr);

printf("%u \n", *ptr);

printf("%p \n", a);

printf("Pointer Of Poiner \n");

// Pointer Of Pointer


int b = 10;
int *b_ptr = &b;
int **pptr = &b_ptr;

printf("%d \n", **pptr);

printf("%p \n", **pptr);

printf("%u \n", **pptr);

printf("%d \n", *b_ptr);

printf("%p \n", *b_ptr);

printf("%u \n", *b_ptr);


}