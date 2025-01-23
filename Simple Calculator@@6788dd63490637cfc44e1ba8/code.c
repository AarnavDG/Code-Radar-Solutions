#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&x,&y,&a);
    if(c=='+'){
        printf("%d",x+y);
    }
    if(c=='-'){
        printf("%d",x-y);
    }
    if(c=='*'){
        printf("%d",x*y);
    }
    if (c=='/'){
        printf("%f",x/y);
    }

    return 0;
}