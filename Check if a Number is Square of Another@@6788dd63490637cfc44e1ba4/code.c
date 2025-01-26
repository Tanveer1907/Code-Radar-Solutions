#include <stdio.h>
int main() {
    int a, b;
    int c = b*b;
    scanf("%d %d", &a, &b);
    if(c == a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}