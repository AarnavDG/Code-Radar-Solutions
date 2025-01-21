#include <stdio.h>

int main() {
    int x,y;
    char a;
    scanf("%d %d %.2lf",&x,&y,&a);
    if(a=='+'){
        printf("%d",x+y);
    }
    else if(a=='-'){
        printf("%d",x-y);
    }
    else if(a=='*'){
        printf("%d",x*y);
    }
    else if(a=='/'){
        printf("%d",x/y);
    }
    else{
        printf("error");
    }
    return 0;
}