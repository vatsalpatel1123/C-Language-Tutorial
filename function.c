#include<stdio.h>
#include<math.h>



float sum(float a)
{
    printf("Round up is: %f", ceil(a));
}

int main()
{
 float add;
  printf("Enter Float Number: ");
  scanf("%f",&add);
    sum(add);
   
  return 0;
}