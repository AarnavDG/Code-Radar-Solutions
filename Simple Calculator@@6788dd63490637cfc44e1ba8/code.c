#include <stdio.h>

int main() {
    int x,y;
    char a;
    scanf("%d %d %f",&x,&y,&a);
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
        printf("%f",x/y);
    }
    else{
        printf("error");
    }
    return 0;
}