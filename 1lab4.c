//------swap with and without other variable------

#include<stdio.h>
int first(){
    int a,b;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d \nb=%d",a,b);
    return 0;
}
int main(){
    printf("WITHOUT USING EXTRA VARIABLE:\n");
    first();
    printf("\nWITH USING EXTRA VARIABLE:\n");
    int a,b,c;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d \nb=%d",a,b);
    return 0;
}
