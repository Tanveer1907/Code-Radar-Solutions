int fibonacciSeries(int n) {
    int a =0, b= 1, c;
    if (n == 1){
        printf("0");
    }
    else{
    for (int i = 1; i <n-1; i++){
    c = a+b;
    
    a = b;
    b = c;
    printf("%d ", c);
}
}}
