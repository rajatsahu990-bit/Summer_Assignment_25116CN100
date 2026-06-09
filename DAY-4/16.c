#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int r,temp,len=0,sum=0;

    temp=i;
    while(temp!=0){
        temp /=10;
        len++;

    }
    temp=i;
    while(temp!=0){
        r=temp%10;
        sum=sum+(int ) round (pow(r,len));
        temp/=10;


    }
    if(sum==i)
    printf("%d\n",i);
}

}