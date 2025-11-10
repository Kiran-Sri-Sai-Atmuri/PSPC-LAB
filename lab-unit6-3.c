//-----------arrange n strings in dictionary order-----------------


#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("ENTER NO.OF STRINGS IN THE STRING ARRAY:");
    scanf("%d",&n);
    char arr[n][20],sc[100];
    printf("\nENTER %d STRINGS:\n",n);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])>0){
                strcpy(sc,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],sc);
            }
        }
    }
    printf("STRINGS AFTER SORTING:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}