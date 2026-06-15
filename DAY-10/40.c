#include<stdio.h>
int main(){
    int n=5,i,j;
    char ch;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");

        }
        for(ch='A';ch < 'A'+i;ch++){
            printf("%c",ch);

        }
        for(ch='A'+i-2; ch>='A';ch--){
            printf("%c",ch);

        }
        printf("\n");

    }
    
}