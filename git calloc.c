#include<stdio.h>  
#include<stdlib.h>  
int main(){  
 int n = 4,*ptr,sum=0;    
    ptr=(int*)calloc(n,sizeof(int)); 
    
   printf("%d \n",ptr[0]);
   printf("%d \n",ptr[1]);
   printf("%d \n",ptr[2]);
   printf("%d \n",ptr[3]);
   
return 0;  
}    