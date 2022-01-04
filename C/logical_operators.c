#include <stdio.h>

int main() {
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("a&&b is %d\n",a&&b);
    printf("a||b is %d\n",a||b);
    printf("!a is %d\n",!a);
    printf("!b is %d\n",!b);    
    return 0;
}