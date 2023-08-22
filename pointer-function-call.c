# include <stdio.h>

//call by value - we pass VALUE of variable as argument
//call by reference - we pass ADDRESS of variable as argument


void square(int n);  //call by value
void _square(int* n);  //call by reference

int main() {
int number = 4;

printf("call by value \n");

square(number);
printf("n is : %d\n", number);

printf("call by reference \n");


_square(&number);
printf("n is : %d\n", number);

return 0;
}

//call by value

void square(int n) {
n = n * n;
printf("square is : %d\n", n);
}

//call by reference

void _square(int* n) {
*n = *n * *n;
printf("square is : %d\n", *n);

}


