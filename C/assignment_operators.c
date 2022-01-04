#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);                 // let a = 8
    scanf("%d",&b);                 // let b = 9
    printf("a=b is %d\n",a=b);      // here after value of b is the value of a ; now a = 9 and b also 9
    printf("a+=b is %d\n",a+=b);    // a + b = a
    printf("a-=b is %d\n",a-=b);    // a - b = a
    printf("a*=b is %d\n",a*=b);    // a * b = a
    printf("a/=b is %d\n",a/=b);    // a / b = a
    printf("a%= b is %d\n",a%=b);   // a % b = a
    return 0;
}