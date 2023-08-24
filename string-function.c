#include<stdio.h>
#include<string.h>

int main(){

    char name[100];
    char city[100];
     printf("City \n");
    scanf("%s \n",&city);
    printf("City name: %s \n",city);
    printf("Name :");
    fgets(name,100,stdin);
    puts(name);

    return 0;
}
