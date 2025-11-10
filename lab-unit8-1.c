/*    Write a program to print the integers from 1 to N and then N to 1 for the given input number 
‘N’ without using any loops. */

#include<stdio.h>
int aorder(int a);
int dorder(int a);
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("NUMBERS FROM 1 TO N:");
    aorder(n);
    printf("\nNUMBERS FROM n TO 1:");
    dorder(n);
}
int aorder(int a){
    if(a==0){
        return 1;
    }
    else{
    aorder(a-1);
    printf("%d\t",a);
    
    }
    
}
int dorder(int a){
    if(a==0){
        return 0;
    }
    else{
        printf("%d\t",a);
        dorder(a-1);
    }
}