#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    printf("Enter the num3: ");
    scanf("%d",&num3);
    
    if(num1>num2 && num1>num3){
        printf("%d is greater",num1);
    }
    else if(num2>num3){
        printf("%d is greater.",num2);
    }
    else{
        printf("%d is greater.",num3);
    }
    return 0;
}