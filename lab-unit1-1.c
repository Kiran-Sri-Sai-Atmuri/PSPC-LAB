//------factors of a given number-------

#include<stdio.h>
int main(){
    int i,j,k,n,o,p;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("----USING FOR LOOP----\n");
    printf("FACTORS OF %d ARE:",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d,",i);
        }
    }
    printf("\n----USING WHILE LOOP----\n");
    printf("FACTORS OF %d ARE:",n);
    i=1;
    while(i<=n){
        if(n%i==0){
            printf("%d,",i);
        }
        i++;
    }
     printf("\n----USING DO WHILE LOOP----\n");
    printf("FACTORS OF %d ARE:",n);
    i=1;
    do{
        if(n%i==0){
            printf("%d,",i);
        }
        i++;
    }while(i<=n);
    return 0;
}