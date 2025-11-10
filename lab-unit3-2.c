//----------second smallest and largest element in array--------------

#include<stdio.h>
int main(){
    int i,j,n;
    printf("ENTER NUMBER OF ELEMENTS");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("THE ELEMENTS IN ARRAY ARE:\n");
    for(i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    printf("\nSECOND SMALLEST IS %d\nSECOND LARGEST IS %d",a[1],a[n-2]);
    
}