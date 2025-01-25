#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a==b==c){
        printf("Equialateral");
    }
    else if(a==b && a!=c | b!=c || b==c && b!=a | c!=a  || c==a && c!=b | a!=b){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}