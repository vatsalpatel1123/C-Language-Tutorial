#include<stdio.h>
#include<string.h>

struct students
{
    int roll;
    char name[100];
};

int main(){

        struct students CE[100];

        CE[0].roll = 16;
        strcpy(CE[0].name,"Vatsal");

         CE[1].roll = 38;
        strcpy(CE[1].name,"Ayushi");

          CE[2].roll = 42;
        strcpy(CE[2].name,"Rudra");
    

        for(int i=0; i<=2; i++){

        printf("Roll No : %d \n",CE[i].roll);
        printf("Name : %s \n",CE[i].name);

    }


    return 0;

}