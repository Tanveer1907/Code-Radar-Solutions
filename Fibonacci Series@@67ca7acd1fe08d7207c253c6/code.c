int fibonacciSeries(int n) {
    int a =0, b= 1, c;
    printf("%d %d ", a , b);
    for ( int i = 1; i <n-1; i++){
    c = a+b;
    printf("%d ", c);
    a = b;
    b = c;
    
}
}
