//-------sum,product,mean of the array elements------------


#include<stdio.h>
int main(){
    int i,j,n;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER %d ELEMENTS IN THE ARRAY:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("THE ELEMENTS IN THE ARRAY ARE:\n");
    for(i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    //ADDITION
    printf("\nSUM OF ELEMENTS IN THE ARRAY\n");
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    //MULTIPLICATION
    printf("\nMULTIPLICATION OF ALL THE ELEMENTS IN THE ARRAY\n");
    int multi=1;
    for(i=0;i<n;i++){
        multi=multi*a[i];
    }
    printf("%d",multi);
    //MEAN
    printf("\nMEAN OF ELEMENTS OF ARRAY\n");
    float mean=sum/n;
    printf("%f",mean);
    return 0;

}