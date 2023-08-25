#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num = 200;
   FILE *fptr;
   fptr = fopen("test.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    int update = fprintf(fptr,"%d",num);

    if(update){
         printf("Success!"); 
    }

   fclose(fptr);

   return 0;
}