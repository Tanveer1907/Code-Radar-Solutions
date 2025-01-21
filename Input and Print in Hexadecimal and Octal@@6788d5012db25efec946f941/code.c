#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("Hexadecimal: %d\n", a/16);
    printf("Octal: %d", a/8);
    return 0;
}