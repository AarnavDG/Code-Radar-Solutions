#include <stdio.h>

int main() {
    int a, b;
    char c;

    // Space before %c to handle whitespace
    scanf("%d %d %c",&a,&b,&c);

    if (c == '+') {
        printf("%d", a + b);
    }
    else if (c == '-') {
        printf("%d", a - b);
    }
    else if (c == '*') {
        printf("%d", a * b);
    }
    else if (c == '/') {
        if (b == 0) {
            printf("error");
        } else {
            printf("%d", a / b);
        }
    }
    return 0;
}
