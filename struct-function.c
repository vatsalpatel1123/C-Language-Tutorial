#include<stdio.h>
#include<string.h>

// void pf(struct printfunction pf);

struct students {

      char name[20];
        int phone;
        char city[10];
        float income;

};

void display(struct students s);

int main(){

struct students s1;

strcpy (s1.name, "Vatsal");  
s1.phone = 81;
strcpy (s1.city, "Mumbai");  
s1.income = 35.5;

display(s1);


    return 0;
}

void display(struct students s) {

    printf("Name : %s \n", s.name);
    printf("Phone : %d \n", s.phone);
    printf("City : %s \n", s.city);
    printf("Income : %f \n", s.income);

}
