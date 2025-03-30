int fibonacciSeries(int n) {
    int a =0, b= 1, c;
    if ( n == 0 || n ==1 ){
        return n;
    }
    else{
    for (int i = 0; i <n-1; i++){
    c = a+b;
    printf("%d ", c);
    a = b;
    b = c;
}
}}
