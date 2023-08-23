# include <stdio.h>
int main() {
int a = 5;
int *ptr = &a;
int _a = 6;
int *_ptr = &_a;

printf("%u\n", ptr);
ptr++;
printf("%u\n", ptr);
ptr--;
printf("%u\n", ptr);
ptr = ptr - _ptr;
printf("%u\n", ptr);

ptr = &_a;
printf("%d\n", ptr == _ptr);
return 0;
}