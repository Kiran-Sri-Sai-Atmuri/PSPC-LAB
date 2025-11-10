//--------perfect square or not-------

#include<stdio.h>
int main(){
    int i,a;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        if(i*i==a){
            printf("%d IS PERFECR SQUARE",a);
            return 0;
        }
      
    }
    printf("%d IS NOT A PERFECT SQUARE",a);
    return 0;
    
}