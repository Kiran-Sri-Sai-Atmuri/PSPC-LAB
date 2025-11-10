//------pattern *------

#include<stdio.h>
int main(){
    int i,j,s,n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=1;s<=n-i-1;s++){
            printf("   ");
        }
        for(j=1;j<=(2*i)+1;j++){
            printf(" * ");
            
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(s=n;s>i;s--){
             printf("   ");
        }
        for(j=1;j<=(2*i)-1;j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}