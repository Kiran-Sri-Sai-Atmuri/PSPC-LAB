//-------prime or not------

#include<stdio.h>
int main(){
    int c,n,i,k;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    printf("----USING FOR LOOP----\n");
    c=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c=c+1;
        }
    }
    if(c==2){
        printf("%d IS A PRIME NUMBER",n);
    }
    else printf("%d IS NOT A PRIME NUMBER",n);
    printf("\n----USING WHILE LOOP----\n");
    k=1;
    c=0;
    while(k<=n){
        if(n%k==0){
            c=c+1;
        }
        k++;
    }
    if(c==2){
        printf("%d IS A PRIME NUMBER",n);
    }
    else printf("%d IS NOT A PRIME NUMBER",n);
    printf("\n----USING DO WHILE LOOP----\n");
    c=0;
    k=1;
    do{
       if(n%k==0){
            c=c+1;
        } 
        k++;
    }while(k<=n);
    if(c==2){
        printf("%d IS A PRIME NUMBER",n);
    }
    else printf("%d IS NOT A PRIME NUMBER",n);
    return 0;
}