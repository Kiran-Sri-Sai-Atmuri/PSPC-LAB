//--------EVEN OR ODD----------

#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d IS EVEN",a);
    }
    else{
        printf("%d IS ODD",a);
    }
    return 0;

}