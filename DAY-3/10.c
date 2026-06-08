#include<stdio.h>
int main(){
    int n;
    printf("enter the upper limit");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        int prime=1;
        if(n<=1){
        prime=0;
    } else{
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
    }
    if (prime){
        printf("%d\n",i);

    }

}
}
