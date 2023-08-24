#include<stdio.h>

// Using Poiner we can change or modify the string value but we cant change any string without pointer 

int main(){

    char *string = "Hello";
    printf("%s",string);

    string = "Hello World!";
   printf("%s",string);
    

    return 0;
}