#include <stdio.h>

int main() {
    int a,b;
    printf("Enetr the a value:");
    scanf("%d",&a);                                         // scanf for giving input to the value a
    printf("Enetr the b value:");
    scanf("%d",&b);                                         // scanf for giving input to the value b     
    printf(" The value of a adding b:%d\n",a+b);            // adding 
    printf(" The value of a subtract b:%d\n",a-b);          // subraction
    printf(" The value of a multiplication b:%d\n",a*b);    // multipilication
    printf(" The value of a divition b:%d\n",a/b);          // divition
    printf(" The value of a reminder b:%d\n",a%b);          // reminder

    printf(" The value of a intialization:%d\n",a++);       // value intialization
    printf(" The value of a decrementation:%d\n",a--);      // value decrementation
    return 0;
}