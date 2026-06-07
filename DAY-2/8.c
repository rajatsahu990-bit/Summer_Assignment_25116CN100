#include<stdio.h>
int main(){
    int num,r,temp,rev=0;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(num==rev){
        printf("%d is palindrome",num);

    }
    else{
        printf( " %d is not palindrome",num);

    }
    return 0;
    
}