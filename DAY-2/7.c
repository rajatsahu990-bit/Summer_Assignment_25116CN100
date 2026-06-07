#include<stdio.h>
int main(){
    int num, product=1,r;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0){
        r=num%10;
        product=product*r;
        num=num/10;
    }
    printf("product of digits=%d",product);
    return 0;
    
}