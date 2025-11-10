//----------------UPPER TO LOWER AND LOWER TO UPPER-------------------

#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER A STRING:");
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    printf("%s",s);
    
}