#include <stdio.h>

int main() {
    int x,y;
    char a;
    scanf("%d %d %c",&x,&y,&a);
    if(a=='+'){
        printf("%d",x+y);
        break;
    }
    if(a=='-'){
        printf("%d",x-y);
        break;
    }
    if(a=='*'){
        printf("%d",x*y);
        break;
    }
    if (a=='/'){
        printf("%d",x/y);
        break;
    }
    else{
        printf("error");
    }
    return 0;
}