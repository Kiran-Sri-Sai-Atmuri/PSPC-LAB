//------PASCAL TRIANGLE------

#include<stdio.h>
int main(){
    int i,j,k,n,s;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++){
            printf(" ");
        }
        int num=1;
        for(j=0;j<=i;j++){
            printf("%d ",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
}