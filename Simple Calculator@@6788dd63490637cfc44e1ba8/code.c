#include <stdio.h>
int main() {
    int a, b;
    char c[10];
    scanf("%d %d", &a, &b);
    scanf("%s", &c);
    if(c == '+'){
        printf("%d", a+b);
    }
    else if(c == '-'){
        printf("%d", a-b);
    }
    else if(c == '*'){
        printf("%d", a*b);}
    else{
        printf("%d", a/b);
    }
    return 0;
}