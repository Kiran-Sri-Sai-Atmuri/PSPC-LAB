//             *****OPTIONAL********
//------sum of even and odd numbers in array---------

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
    int evensum=0,oddsum=0;
    for(i=0;i<n;i++){
       if (a[i]%2==0)
       {
         evensum=evensum+a[i];
       }
       else{
        oddsum=oddsum+a[i];
       }
       }
    printf("\nSUM OF EVEN NUMBERS IN THE ARRAY IS %d\n",evensum);
    printf("SUM OF EVEN NUMBERS IN THE ARRAY IS %d",evensum);

}