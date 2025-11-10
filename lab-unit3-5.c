//********OPTIONAL*************
//------------print array elements in reverse order-------------


#include<stdio.h>
int main(){
    int n,j,i;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[n-1-i]);
    }
    
}