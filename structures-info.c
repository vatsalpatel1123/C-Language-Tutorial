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

        struct information i;
        strcpy(i.name,"Vatsal");
        i.phone = 98;
        i.income = 38.5;
        strcpy(i.city,"Ahmedabad");

        printf("%s \n",i.name);
        printf("%d \n",i.phone);
        printf("%f \n",i.income);
        printf("%s \n",i.city);


        //Struct initization in other way

        struct information i2 = {"Vatsal", 811, "Surat", 40.5};

        printf("%s \n",i2.name);
        printf("%d \n",i2.phone);
        printf("%f \n",i2.income);
        printf("%s \n",i2.city);


        return 0;
    }
    

    