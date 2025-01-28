#include <stdio.h>
int main() {
    int n, sum = 0 ;
    scanf("%d", &n);
    printf("%d", n);
    for(int i = 1; i>n+1; i++){
        printf("%d", sum+=i);
        
    }
    return 0;
}