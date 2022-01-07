#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    
    // in c computer calculate the values from left to right
    
    printf("%d\n",(a*b)+(c*d));	// ()  are first importance
    printf("%d\n",a*b/c*d);		// */% are secound importance
    printf("%d\n",a+b-c+d);		// +-  are third importance
    return 0;
}
