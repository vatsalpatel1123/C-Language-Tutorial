#include<stdio.h>

// Main Keypoin is Declare variable before using it
int main() {
int a = 10;
int b = a;
int c = b + 2;

printf("new age is : %d", c);

int x, y, z;
x = y = z = 5;

/*
order of declaration is important
int a = 10;
int b = c;  
int c = 20;

"c" is used before declaration so it's invalid
*/

// valid declaration


return 0;
}