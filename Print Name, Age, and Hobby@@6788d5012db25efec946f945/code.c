#include <stdio.h>


int main() {
    int x;
    char word1[100],word2[100];
    scanf("%99s",word1);
    scanf("%d",x);
    scanf("%99s",word2);
    printf("Name: %s\n",word1);
    printf("Age: %d\n",x);
    printf("Hobby: %s\n",word2);
    return 0;
}