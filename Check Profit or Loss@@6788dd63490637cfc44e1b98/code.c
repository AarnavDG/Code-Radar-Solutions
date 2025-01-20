#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int z;
    z=x-y;
    if(z>0){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}