/*     Write a program to implement the string operations like Length of String, String Copying, 
String Concatenation, Conversion to Uppercase and String Comparison.( Define own Function for 
each of the operations. Header file “string.h” is not allowed) */


#include<stdio.h>
int length(char s[100]);
void copy(char s1[100],char s2[100]);
void concat(char s1[100],char s2[100]);
void upper(char s[100]);
int compare(char s1[100],char s2[100]);
int main(){
    printf("ENTER A STRING TO FIND LENGTH:");
    char k1[100],k2[50],k3[50],k4[50],k5[50],k6[50],k7[50],k8[50];
    scanf("%s",k1);
    getchar();
    int len=length(k1);
    printf("%d",len);
    printf("\nENTER TWO STRINGS TO COPY:");
    scanf("%s",k2);
    getchar();
    scanf("%s",k3);
    getchar();
    copy(k2,k3);
    printf("\n%s",k2);
     printf("\nENTER TWO STRINGS TO CONCATINATE:");
    scanf("%s",k4);
    getchar();
    scanf("%s",k5);
    getchar();
    concat(k4,k5);
    printf("\n%s",k4);
    printf("\nENTER A STRING TO CONVERT TO UPPER CASE:");
    scanf("%s",k6);
    getchar();
    upper(k6);
    printf("%s",k6);
    printf("\nENTER TWO STRINGS TO COMPARE:");
    scanf("%s",k7);
    getchar();
    scanf("%s",k8);
    getchar();
    int cm=compare(k7,k8);
    printf("%d",cm);
}

int length(char s[100]){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;

}

void copy(char s1[100],char s2[100]){
    int i;
    for(i=0;s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    
}

void concat(char s1[100],char s2[100]){
    int i=0,j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        j++;
        i++;
    }
    s1[i]='\0';
}
void upper(char s[100]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i] <='z'){
            s[i]-=32;
        }
    }
}

int compare(char s1[100],char s2[100]){
    int flag=0;
    for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){
        if(s1[i]>s2[i]){
            flag=1;
            break;
        }
        else if(s1[i]<s2[i]){
            flag=-1;
            break;
        }
        
    }
    return flag;
}