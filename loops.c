# include <stdio.h>
int main () {

//for loop
// for(initialisation; condition; updation)

for(int i=1; i<=100; i++) {
printf("%d\n", i);
}

//while loop
// while(condition)

int i=1;
while(i<=100) {
printf("%d\n", i);
i++;
}

//do while loop
// do { Run aleast one time then } while(condition);

i = 1;
do {
    printf("%d\n", i);
i++;
} while(i<=100);
return 0;
}
