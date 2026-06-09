#include<stdio.h>
int main(){
    int a=0,b=1,n,c;
    printf("enter number of terms");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
         
         c=a+b;
         a=b;
         b=c;
        
    }
    printf(" %d ",a);
}