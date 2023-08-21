#include<stdio.h>
// Relational Operators
int main() {
printf("%d \n", 4==4);
printf("%d \n", 4<3);
printf("%d \n", 3<4);
printf("%d \n", 4<4);
printf("%d \n", 4<=4);
printf("%d \n", 4>3);
printf("%d \n", 3>4);
printf("%d \n", 4>4);
printf("%d \n", 4>=4);
printf("%d \n", 4!=4);
printf("%d \n", 3!=4);

// Logical Operator

printf("%d \n", 3<4 && 3<5);
printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3>4 && 5>4);
printf("%d \n", 3<4 && 3<5);
printf("%d \n", !(3<4 && 3<5));
printf("%d \n", !(4<3 || 5<3));

// Assignment Operator

int a = 10;
a += 10;
printf("a+10 = %d \n", a);
a -= 10;
printf("a-10 = %d \n", a);
a *= 10;
printf("a*10 = %d \n", a);
a /= 10;
printf("a/10 = %d \n", a);
a %= 10;
printf("a%c10 = %d \n", '%', a);
return 0;
}