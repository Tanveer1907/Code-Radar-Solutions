#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = ~b;
    printf("%d", c);
    return 0;
}