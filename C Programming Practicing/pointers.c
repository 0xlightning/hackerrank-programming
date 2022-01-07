#include <stdio.h>

int main(){
    int a=10; // Normal variable
    
    // printf("%d",&a);

    int *ptr; // pointers or variables address

    ptr = &a;

    printf("%d\n",*ptr);

    return 0;
}