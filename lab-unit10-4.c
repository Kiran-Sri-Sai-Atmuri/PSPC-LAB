// program to search for a word in a given text file

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;
    char s[100],temp[100];
    printf("ENTER A STRING TO SEARCH:\n");
    scanf("%s",s);
    // getchar();
    fp=fopen("abcd.txt","r");
    if(fp==NULL){
        printf("ERROR");
        return 0;
    }
    int lines=0,found=0;
    while(fgets(temp,sizeof(temp),fp)!=NULL){
         lines++;
        if(strstr(temp,s)){
            printf("FOUND in line %d\n",lines);
            found=1;
        }
    }
    if(!found)
      printf("NOT FOUND"); 
    
}