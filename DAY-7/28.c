#include<stdio.h>
int rev(int n,int reverse){
    if(n==0)
    return reverse;
    reverse=reverse*10+n%10;
    return rev(n/10,reverse);

}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("reverse=%d",rev(n,0));
}