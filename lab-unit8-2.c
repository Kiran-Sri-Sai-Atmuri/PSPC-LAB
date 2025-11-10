/*    Write a program to find the X power N(XN) using the user defined recursive function 
“pow(X,N)” without using any predefined function from the library. */


#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return (a*power(a,b-1));
    }
}
int main(){
    int b,p;
    printf("ENTER BASE NUMBER:");
    scanf("%d",&b);
    printf("ENTER EXPONENT NUMBER:");
    scanf("%d",&p);

    int result=power(b,p);
    printf("%d",result);

}
