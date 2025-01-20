#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);
    if(x=='aeiouAEIOU'){
        prinf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}