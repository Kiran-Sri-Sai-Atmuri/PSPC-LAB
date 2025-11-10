//----------multiplication of two matrices------------


#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j;
    int mul[10][10];
    printf("ENTER NO.OF ROWS and COLS OF FIRST ARRAY:");
    scanf("%d %d",&r1,&c1);
    printf("\nENTER NO.OF EOWS AND COLS OF SECOND ARRAY:");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1];
    int b[r2][c2];
    printf("\nENTER THE ELEMENTS IN A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nENTER THE ELEMENTS IN B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            mul[i][j]=0;
            for(int k=0;k<c1;k++){
                mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("MULTIPLICATION:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
