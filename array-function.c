#include<stdio.h>


void checkOddNum(int arr[], int n);

int main(){

int arr[] = { 20,21,22,23,24,25};

checkOddNum(arr,6);

}

void checkOddNum(int arr[], int n){

for(int i=0; i<n; i++){

    if(arr[i] % 2 != 0){
        printf("Odd is : %d\n" ,arr[i]);
    }

}
}