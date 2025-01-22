#include <stdio.h>
int main() { 
    char Name[50];
    int Age;
    char Hobby[50];
    scanf("%c", &Name);
    printf("Name: &s/n", Name);
    scanf("%d", &Age);
    printf("Age: %d/n", Age);
    scanf("%c", &Hobby);
    printf("Hobby: %s", Hobby);
    return 0;
}