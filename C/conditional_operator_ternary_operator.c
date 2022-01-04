#include <stdio.h>

// Conditional operator is also known as ternary_operator
// this is a if or else condition
// experssion_1(condition) experssion_2(if) experssion_3(else)

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a>b?printf("a is big\n"):printf("b is big\n");
    return 0;
}