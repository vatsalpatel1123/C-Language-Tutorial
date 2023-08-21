#include<stdio.h>

int main(){


// break 

    for(int i=0; i<=5; i++){

        if(i==3){
            break;
        }
        printf("%d \n",i);
    }

    // continue

     for(int i=0; i<=5; i++){

        if(i==3){
            continue;
        }
        printf("%d \n",i);
    }

    return 0;
}