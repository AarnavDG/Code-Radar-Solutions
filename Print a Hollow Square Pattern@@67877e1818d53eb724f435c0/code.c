#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        for(j=0;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                printf("*");
            else{
                printf(" ");
            }
        printf("\n");
            }
        }
    }
    return 0;
}