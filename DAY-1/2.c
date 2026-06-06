#include<stdio.h>
int main(){
    int i,num;
    printf("enter a number");
    scanf("%d",&num);
    printf("multiplication table of %d:",num);
    for(i=1;i<=10;i++){
        printf("%d\n",num*i);

    }
    return 0;

}