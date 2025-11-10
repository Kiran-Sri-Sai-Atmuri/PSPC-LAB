//-----palindrome-------

#include<stdio.h>
int main(){
    int a,k,n,m,i,r;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    m=n;
    r=0;
    printf("----USING FOR LOOP----\n");
    for(i=n;i>0;i=i/10){
        a=i%10;
        r=(r*10)+a;
    }
     if(r==m){
        printf("%d IS PALINDROME",m);
    }
    else {
        printf("%d IS NOT PALINDROME",m);
    }
    printf("\n----USING WHILE LOOP----\n");
    m=n;
    r=0;
    while(n!=0){
        a=n%10;
        r=(r*10)+a;
        n=n/10;
    }
    if(r==m){
        printf("%d IS PALINDROME",m);
    }
    else{
         printf("%d IS NOT PALINDROME",m);
    }
    printf("\n----USING DO WHILE LOOP----\n");
    k=m;
    m=n;
    r=0;
    do{
      a=n%10;
      r=(r*10)+a;
      n=n/10;  
    }while(n!=0);
    if(r==m){
        printf("%d IS PALINDROME",k);
    }
    else{
         printf("%d IS NOT PALINDROME",k);
    }
    return 0;
}