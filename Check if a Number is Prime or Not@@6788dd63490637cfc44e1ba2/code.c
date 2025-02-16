#include <stdio.h>
int main(){
    int n, flag = 0 ;
    scanf("%d" &n);
    for (int a=2; a<n; a++){
        if (n%a==0){
            flag = 1;
            break;
        }
    if (flag==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    }
    return 0;
}