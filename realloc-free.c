#include<stdio.h>  
#include<stdlib.h>  
int main(){  
 int n = 4,*ptr,sum=0;    
    ptr=(int*)calloc(n,sizeof(int)); 

ptr[0] = 101;
ptr[1] = 102;
ptr[2] = 103;
ptr[3] = 104;
    
   printf("%d \n",ptr[0]);
   printf("%d \n",ptr[1]);
   printf("%d \n",ptr[2]);
   printf("%d \n",ptr[3]);
   
    free(ptr);
   ptr = realloc(ptr,6);

    printf("%d \n",ptr[0]);
   printf("%d \n",ptr[1]);
   printf("%d \n",ptr[2]);
   printf("%d \n",ptr[3]);
   printf("%d \n",ptr[4]);
   printf("%d \n",ptr[5]);
   

   
return 0;  
}    