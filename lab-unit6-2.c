//---------print words of a string in reverse order-------------------

#include<stdio.h>
#include<string.h>
int main(){
    int count=0,k=0,i;
    char s[100],word[20][20];
    printf("ENTER A STRING:");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            word[count][k]='\0';
            count++;
            k=0;
        }
        else{
            word[count][k++]=s[i];
        }
    }
    word[count][k]='\0';
    count++;

    printf("\nTHE REVERSED STRING IS:");
    for(i=count-1;i>=0;i--){
        printf("%s",word[i]);
        if(i!=0){
            printf(" ");
        }
    }
    return 0;

}