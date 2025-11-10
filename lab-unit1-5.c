//----fibonaci series-----

#include<stdio.h>
int main(){
    int i,a,b,c,n;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    printf("----USING FOR LOOP----\n");
    a=0,b=1;
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++){
         c=a+b;
         printf("%d ",c);
         a=b;
         b=c;
    }
    printf("\n----USING WHILE LOOP----\n");
    a=0,b=1,i=1;
    printf("%d %d ",a,b);
    while(i<=n-2){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    printf("\n----USING DO WHILE LOOP----\n");
    a=0,b=1,i=1;
    printf("%d %d ",a,b);
    do{
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }while(i<=n-2);
    return 0;
}
