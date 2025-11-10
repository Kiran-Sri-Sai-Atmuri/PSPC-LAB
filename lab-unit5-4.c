//-------------sort given string of characters-----------


#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER A STRING:");
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(s[i]>s[j]){
                char temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("STRING AFTER SORTING IS %s",s);
    return 0;
}