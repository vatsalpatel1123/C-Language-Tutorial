#include<stdio.h>
#include<string.h>

struct information
    {
        char name[20];
        int phone;
        char city[10];
        float income;

    };

int main(){

    struct information c1;

    strcpy(c1.name,"Vatsal");
        c1.phone = 98;
        c1.income = 38.5;
        strcpy(c1.city,"Ahmedabad");

    struct information *ptr = &c1;

    // two way to print
    
        printf("%s \n",(*ptr).name);
        printf("%s \n",ptr->city);


    return 0;
}