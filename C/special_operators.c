#include <stdio.h>

int main() {
    int a,b;
    char cha = 'a';
    printf("%ld\n", sizeof(cha));
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(float));
    printf("%ld\n", sizeof(&a));
    printf("it tells the number of bits in the variables\n");
    return 0;
}