#include <stdio.h>
int main() {
    int a;
    scanf("5d", &a);
    if (100>=a>=90){printf("A");}
    if(90>a>=80){printf("B");}
    if(80>a>=70){printf("C");}
    if(70>a>=60){printf("D");}
    if (a<60){printf("F");}
    return 0;
}