// malloc()	allocates single block of requested memory.
// calloc()	allocates multiple block of requested memory.
// realloc()	reallocates the memory occupied by malloc() or calloc() functions.
// free()	frees the dynamically allocated memory.
// malloc() function in C
// The malloc() function allocates single block of requested memory.


#include<stdio.h>  
#include<stdlib.h> 
 
int main(){  

  int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");  

    scanf("%d",&n);    

    ptr=(int*)malloc(n*sizeof(int));  
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);     
return 0;  
}    