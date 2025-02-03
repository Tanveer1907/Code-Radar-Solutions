#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    for(int i =1; i<=n; i++){
        sum += i;}
    printf("%d\n", sum);
    return 0;
}