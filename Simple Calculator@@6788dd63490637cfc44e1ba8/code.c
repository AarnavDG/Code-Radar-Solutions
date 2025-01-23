#include <stdio.h>

void main() {
    int x,y;
    char a;
    scanf("%d %d %c",&x,&y,&a);
    if(a=='+'){
        printf("%d",x+y);
    }
    if(a=='-'){
        printf("%d",x-y);
    }
    if(a=='*'){
        printf("%d",x*y);
    }
    if (a=='/'){
        printf("%d",x/y);
    }
    else{
        printf("error");
    }
    return 0;
}