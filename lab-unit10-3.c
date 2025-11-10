// program to append one file at the end of another file

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1,*fp2;
    char ch;
    
    fp1=fopen("source.txt","r");
    fp2=fopen("destination.txt","a");
    if(fp1==NULL || fp2==NULL){
        printf("ERROR");
        exit(1);
    }
    while ((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("SUCCESSFULLY EXECUTED\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}