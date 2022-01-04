#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a==b is %d\n",a==b);    // both are equal 
    printf("a!=b is %d\n",a!=b);    // both are not equal too
    printf("a>=b is %d\n",a>=b);    // greater than or equal too
    printf("a<=b is %d\n",a<=b);    // lesser than or equal too
    printf("a>b is %d\n",a>b);      // greater than symbol
    printf("a<b is %d\n",a<b);      // lesser than symbol
    return 0;
}