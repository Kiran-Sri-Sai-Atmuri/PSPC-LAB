/*  Write a program to find the GCD of two numbers ‘a’ and ‘b’ by defining a recursive 
function GCD(a,b). */

#include<stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        gcd(b,a%b);
    }
}
int main(){
    int a,b;
    printf("ENTER TWO NUMBERS:");
    scanf("%d %d",&a,&b);
    int g= gcd(a,b);
    printf("GCD OF %d AND %d IS:%d",a,b,g);
}