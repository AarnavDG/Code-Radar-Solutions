#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
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