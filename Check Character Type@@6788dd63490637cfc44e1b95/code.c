#include <stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x=='a'|| x=='e' || x=='i' ||x=='o' || x=='u' || x=='A'  || x=='E' || x=='I' ||x=='O' ||x=='U'){
        printf("Vowel");
    }
    else if(x>='0' && x<='9'){
        printf("Digit");
    }
    else if((x>=32 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=126)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}