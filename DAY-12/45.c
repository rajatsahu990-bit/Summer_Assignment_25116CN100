#include<stdio.h>
int palidrome(int n){
    int rev=0,temp=n,rem;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;

}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if (palindrome(n))
    printf("%d is a palidrome number",n);
    else 
    printf("%d is not a palindrome",n);

}