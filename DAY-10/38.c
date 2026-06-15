#include<stdio.h>
int main(){
    int i,j,k;
    int rows=5;
    for(i=rows;i>=1;i--){
        for(j=0;j,rows-i;j++){
            printf("");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}