//----------prime numbers patterns--------------


#include <stdio.h>
int isPrime(int n) {
    if (n < 2){

    return 0;
}
else{
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }

    }
    return 1;
}
}

int main() {
    int rows;
    printf("ENTER ROWS:");
    scanf("%d",&rows);       
    int count = 0;  
    int num = 2;    

    for (int i = 1; i <= rows; i++) {
        
        for (int s = i; s < rows; s++) {
            printf("   ");
        }

       
        for (int j = 1; j <= i; j++) {
            while (!isPrime(num)) {
                num++;

            }
            printf("%3d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}