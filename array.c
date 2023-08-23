# include <stdio.h>

// Array - Collection of same datatype stored at continues memory location

int main() {

    int array_example[] = {1,2,3,4,5};

int marks[3];

printf("Math : ");
scanf("%d", &marks[0]);

printf("Science : ");
scanf("%d", &marks[1]);

printf("English : ");
scanf("%d", &marks[2]);

printf("Math = %d, ", marks[0]); 
printf("Science = %d, ", marks[1]); 
printf("English = %d \n", marks[2]);
 
return 0;
}