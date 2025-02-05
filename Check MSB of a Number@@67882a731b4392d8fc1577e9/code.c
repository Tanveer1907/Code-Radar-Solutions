#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 32
    int mask= 1<<(i-1);
    if(n & mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}