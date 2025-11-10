//---------addition and subtraction of two matrices----------------


#include<stdio.h>
int main(){
    int rows,cols,i,j;
    printf("ENTER NO.OF ROWS:");
    scanf("%d",&rows);
    printf("\nENTER NO.OF COLS:");
    scanf("%d",&cols);
    int a[rows][cols];
    int b[rows][cols];
    printf("\nENTER THE ELEMENTS IN A:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nENTER THE ELEMENTS IN B:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nADDITION OF TWO MATRICES:\n");
    int c[rows][cols];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    printf("\nSUBTRACTIO OF TWO MATRICES:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
}