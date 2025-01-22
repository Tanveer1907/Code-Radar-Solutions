#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s", &name);
    printf("Name: %s", name);
    scanf("%d", &age);
    printf("Age: %d", age);
    scanf("%s", &hobby);
    printf("Hobby: %s", hobby);
    return 0;
}