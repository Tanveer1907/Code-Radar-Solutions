#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(inti =1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}