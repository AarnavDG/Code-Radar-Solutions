#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);
    if(ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else if(ch>=A && ch<=Z){
        printf("Uppercase");
    }
    else{
        printf("Not a Alphabet");
    }
    
    return 0;
}