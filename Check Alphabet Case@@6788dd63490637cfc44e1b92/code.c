#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(122>=x>=97){
        printf("Lowercase");
    }
    else if(90>=x>=65){
        printf("Uppercase");
    }
    // else{
    //     printf("Not a Alphabet");
    // }
    return 0;
}