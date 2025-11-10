//-------positive number or not--------

#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    if(a>0){
        printf("%d IS POSITIVE",a);
    }
    else if(a<0){
        printf("%d IS NEGATIVE",a);
    }
    else{
        printf("%d IS ZERO",a);
    }
}