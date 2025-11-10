//-------------count no.of vowels,consonants and digits in a string-----------------


#include<stdio.h>
#include<string.h>
int main(){
    int i,vowel=0,consonant=0,digit=0;
    char s[100];
    printf("ENTER A STRING:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' ||s[i]=='o'||s[i]=='u'){
                vowel++;
            }
            else if(s[i]>='0' && s[i]<='9'){
            digit++;
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i] <='Z')){
            consonant++;
        }
        
    }
    printf("NUMBER OF VOWELS ARE:%d\n",vowel);
    printf("NUMBER OF CONSONANTS ARE:%d\n",consonant);
    printf("NUMBER OF DIGITS ARE:%d\n",digit);

}
