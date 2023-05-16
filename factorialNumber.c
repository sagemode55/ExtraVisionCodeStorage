// C Program to print the nth term in fibonacci series
// Note : Acc to fibonacci series definition
// 0th term : 0, 1st term : 1
#include

int main() {

    int a = 0, b = 1;
    int nextTerm;
    
    int n = 6;
    
    // if asked to print 0th/1st term
    // f(0) = 0 and f(1) = 1
    if (n == 0 || n == 1){
        printf("fib(%d) : %d",n, n);
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("fib(%d) : %d",n, nextTerm);
    
    return 0;
}
// C Program to print the nth term in fibonacci series
// Note : Acc to fibonacci series definition
// 0th term : 0, 1st term : 1
#include

int fibo(int num);
int main() {

    int n = 6;

    int fibonacci = fibo(n);
    printf("fib(%d) : %d", n, fibonacci);

    return 0;
}

// Recursive function to find nth Fibonacci term
int fibo(int n) {

    if (n == 0 || n == 1)  // Base condition
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}
