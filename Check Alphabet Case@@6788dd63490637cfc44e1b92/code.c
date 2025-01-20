#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x>=97 && x<=122){
        printf("Lowercase");
    }
    else if(x>=65 && x<=95){
        printf("Uppercase");
    }
    else{
        printf("Not a Alphabet");
    }
    return 0;
}