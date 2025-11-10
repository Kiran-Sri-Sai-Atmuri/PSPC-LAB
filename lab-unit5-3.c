//----PALINDROME STRING------

#include<stdio.h>
#include<string.h>
int main(){
    int flag=1;
    char s[100];
    printf("ENTER A STRING:");
    gets(s);int len=strlen(s);
    for(int i=0;s[i]!='\0'; i++){
        if(s[i]==s[len-i-1]){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag){
        printf("%s IS PALINDROME",s);
    }
    else{
        printf("%s IS NOT PALINDROME",s);
    }
}