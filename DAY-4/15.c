#include<stdio.h>
#include<math.h>

int main(){
    int r,n,temp,len=0,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        temp /=10;
        len++;

    }
    temp=n;
    while(temp!=0){
        r=temp%10;
        sum=sum+(int ) round (pow(r,len));
        temp/=10;


    }
    if(sum==n)
    printf("it is an armstrong number");
    else
    printf("it is not an armstrong number");

}