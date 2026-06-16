#include<stdio.h>
long fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;

}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("factorial=%d", fact(n));
}