//-----factorial of a given number------

#include<stdio.h>
int main(){
    int a,b,n,i,j,f;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    printf("-----USING FOOR LOOP-----\n");
    printf("FACTORIAL OF %d IS:",n);
    f=1;
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("%d",f);
    f=1;
    i=1;
    printf("\n-----USING WHILE LOOP-----");
    printf("\nFACTORIAL OF %d IS:",n);
    while(i<=n){
        f*=i;
        i++;    
    }
    printf("%d",f);
    f=1;
    i=1;
    printf("\n-----USING DO WHILE LOOP-----");
    printf("\nFACTORIAL OF %d IS:",n);
    do{
        f*=i;
        i++;
    }while(i<=n);
    printf("%d",f);
    return 0;
}