#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x>96 && x<123){
        printf("Lowercase");
    }
    else if(x>64 && x<91){
        printf("Uppercase");
    }
    else{
        printf("Not a Alphabet");
    }
    return 0;
}