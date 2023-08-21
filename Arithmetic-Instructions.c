#include<stdio.h>

//[ Arithmetic Instructions are { +  -  *  /  %  }  ]
int main() {
    int v, x, y, z;
int a = 2, b = 3;

v = a + b;
x = a - b;
y = a * b;
z = a / b;

printf("v %d \n x %d \n y %d \n z %d \n", v,x,y,z);

printf("%d \n", 3 % 2);

return 0;
}