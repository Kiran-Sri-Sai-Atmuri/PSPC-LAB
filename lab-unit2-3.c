//------perfect numbers------

#include<stdio.h>
int main(){
    int j,n,i=1;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    int c=0;
    while(c<n){
        int sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d\n",i);
            c++;
        }
        i++;
    }
}