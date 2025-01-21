#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("Hexadecimal: %c", a);
    printf("Octal: %c", a/8);
    return 0;
}