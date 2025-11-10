//*******OPTIONAL************
//-----even and odd numbers in array-----------


#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("ENTER NUMBER OF ELEMENTS IN AN ARREY:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEVEN NUMBERS IN TH ARRAY ARE:");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    printf("\nODD NUMBERS IN THE ARRAY ARE:");
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
}