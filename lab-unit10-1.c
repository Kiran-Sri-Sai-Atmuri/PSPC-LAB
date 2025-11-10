/*  print the number of lines and words in a given input file name*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    FILE *fp;
    char ch;
    fp=fopen("abcd.txt","rb");
    if(fp==NULL){
        printf("ERROR");
        exit(1);
    }
    int lines=1,i=0,words=1;

    while(ch!=EOF){
        ch=fgetc(fp);
        if(ch=='\n'){
            lines++;
        }
         if(ch == ' ' || ch == '\t' || ch == '\n' ){
        //     i=0;
        //  }
        //  else if(i==0){
            words++;
          //  i=1;
         }
    }

    printf("SUCCESSFULLY EXECUTED\n");
    printf("NUMBER OF LINES IN THE FILE IS:%d\n",lines);
    printf("NUMBER OF WORDS IN THE FILE IS:%d",words);
    fclose(fp); 
   
}