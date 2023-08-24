#include<stdio.h>
#include<string.h>

typedef struct students
{
    int enroll;
    char name[20];

}CE_stu;


int main(){

    CE_stu classA[100];
    classA[0].enroll = 01;
    strcpy(classA[0].name, "Siddharth");

    printf("class A student 1 : %d \n",classA[0].enroll);
    printf("class A student 1 : %s \n",classA[0].name);

    return 0;
}