#include<stdio.h>
int sum(int n){
    if(n==0)
    return 0;
    return (n%10)+sum(n/10);
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("sum is %d",sum(n));
}