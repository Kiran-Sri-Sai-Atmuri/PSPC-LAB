//------prime numbers upto n and first n prime numbers------

#include<stdio.h>
int first(){
    int i,j,n;
    printf("ENTER A RANGE");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c=c+1;
            }
        }
        if(c==2){
            printf("%d ",i);
        }
    }
    return 0;
}

int main() {
    first();
    int n, count = 0, num = 2, i, isPrime;

    printf("\nEnter how many prime numbers you want: \n");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

   for(num=2;count<n;num++){
    isPrime=1;
    for(i=2;i<num;i++){
        if(num%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        printf("%d ",num);
        count++;
    }
   }

    return 0;
}
    
    