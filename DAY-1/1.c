#include<stdio.h>
int main(){
    int N,i, sum=0;
    printf("enter the value of N:");
    scanf("%d",&N);

    for( i = 1; i<=N;i++) {
        sum=sum+i;
    }
    printf(" sum of first %d natural numbers=%d",N,sum);

    return 0;
}
