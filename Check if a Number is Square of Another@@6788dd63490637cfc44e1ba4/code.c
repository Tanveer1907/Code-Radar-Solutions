#include <stdio.h>
int main() {
    int a, b;
    int c = a*a;
    scanf("%d %d", &a, &b);
    if(c == b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}