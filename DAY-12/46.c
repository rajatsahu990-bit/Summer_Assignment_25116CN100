#include<stdio.h>
int isarmstrong(int num){
    int temp,rem,digits=0;
    int sum=0;
    temp=num;
    while(temp!=0){
        digits++;
        temp/=10;
    }
    temp= num;
    while (temp!=0){
        rem=temp%10;
        sum+=pow(rem,digits);
        temp/=10;
    }
   return(sum==num);

}
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if( isarmstrong(num))
    printf("%d is an armstrong number", num);
    else
    printf("%d is not an armstrong number",num);
    
}