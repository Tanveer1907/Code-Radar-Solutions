#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = b*b;
    if(c == b ){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}