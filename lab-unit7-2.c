/*  Write a C program to implement Multiplication and Division Operations without using 
operators “*” and “\” respectively. Define function “mul” for multiplication and “div” for integer 
division. */



#include<stdio.h>
int mul(int c,int d){
    int a=c,b=d;
    int positive=1,result=0;
    if(a<0 && b>0){
        a=-a;
        positive=0;
    }
    else if(a>0 && b<0){
        b=-b;
        positive=0;
    }
    else if(a<0 && b<0){
        a=-a;
        b=-b;
    }
    for(int i=0;i<b;i++){
        result+=a;
    }

    if(!positive){
        result=-result;
    }
    printf("MULTIPLICATION OF %d AND %d IS:%d\n",c,d,result);
}
int div(int c,int d){
    int a=c,b=d;
    int positive=1,result=0;
    if(a<0 && b>0){
        a=-a;
        positive=0; 
    }
    else if(a>0 && b<0){
        b=-b;
        positive=0;
    }
    else if(a<0 && b<0){
        a=-a;
        b=-b;
    }
    else if(b==0){
        printf("b can't be 0");
        return 0;
    }

    while(a>=b){
        a=a-b;
        result++;
    }
    if(!positive){
        result=-result;
    }
    printf("DIVISION OF %d AND %d IS:%d",c,d,result);
}
int main(){
    int a=40,b=20;
    mul(a,b);
    div(a,b);
}