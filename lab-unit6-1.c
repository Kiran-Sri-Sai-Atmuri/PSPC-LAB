//-------------strings starting with 'c' and 'a'----------



#include<stdio.h>
int main(){
    int n;
    printf("ENTER NO.OF STRINGS IN AN STRING ARRAY:");
    scanf("%d",&n);
    char s[n][100];
    printf("ENTER %d STRINGS:",n);
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    printf("STRINGS STARTING WITH CHARACTER 'a' AND 'c' ARE:\n");
    for(int i=0;i<n;i++){
        if(s[i][0]=='a'||s[i][0]=='c' || s[i][0]=='A'||s[i][0]=='C'){
            printf("%s\n",s[i]);
        }
    }
}