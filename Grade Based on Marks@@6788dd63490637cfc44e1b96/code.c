#include <stdio.h>
int main() {
    int a;
    scanf("5d", &a);
    if (100>=a>=90){printf("A");}
    else if(90>a>=80){printf("B");}
    else if(80>a>=70){printf("C");}
    else if(70>a>=60){printf("D");}
    else if (a<60){printf("F");}
    else {
        printf("Wrong entry");
    }
    return 0;
}