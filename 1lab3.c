//-----add,sub,mul,div,pow by switch --------


#include<stdio.h>
#include<math.h>
int main(){
    int a,b,operator;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    printf("\n*****MENU*****\n");
    printf("\n1 FOR ADD \n2 FOR SUBTRACTION \n3 FOR MULTIPLICATION \n4 FOR DIVISION\n5 FOR POWER\n");  
    scanf("%d",&operator);
    switch(operator){
        case 1:
        printf("SUM IS %d+%d=%d",a,b,a+b);
        break;
        case 2:
        printf("SUBTRACTION IS %d-%d=%d",a,b,a-b);
        break;
        case 3:
        printf("multiplication IS %d*%d=%d",a,b,a*b);
        break;
        case 4:
        printf("DIVISION IS %d/%d=%d",a,b,a/b);
        break;
        case 5:
        printf("POWER OF %d TO %d IS:%lf",a,b,pow(a,b));
        break;
        default:
        printf("ENTER CORRECT OPERATOR");
        break;
    }
    return 0;
}