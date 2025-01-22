#include <stdio.h>
int main() { 
    char Name[50];
    int Age;
    char Hobby[50];
    scanf("%s", &Name);
    printf("Name: &s/n", Name);
    scanf("%d", &Age);
    printf("Age: %d/n", Age);
    scanf("%s", &Hobby);
    printf("Hobby: %s", Hobby);
    return 0;
}