#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a&b is %d\n",a&b);      // bitwise and
    printf("a|b is %d\n",a|b);      // bitwise or
    printf("a^b is %d\n",a^b);      // bitwise exclusive or
    // shifting 
    scanf("%d",&c);
    printf("c<<5 is %d\n",c<<5);    // left shift
    printf("c>>5 is %d\n",c>>5);    // right shift
    return 0;
}