#include<stdio.h>
#include<math.h> 
int main() 
{
    double base = 2.3;
    double exp = 2.1;
    double result;
    
    // calculates the power
    result = pow(base, exp);
    
    // %lf used for double
    printf("%lf ^ %lf = %lf\n", base, exp, result);
    
    // following can be used for precision setting
    printf("%.1lf ^ %.1lf = %.2lf", base, exp, result);

    return 0;
}
#include<stdio.h>

int main() 
{
    double base = 2.32;
    // exp has to be positive and int value for this method
    int exp = 2;
    double result = 1.0;
    
    while (exp != 0) {
        result *= base;
        --exp;
    }
    
    printf("Answer = %lf", result);
    
    return 0;
}
#include<stdio.h>

int main() 
{
    double base = 2.32;
    // exp has to be int value. But, can be neg/pos both
    int exp = -2;
    double result = 1.0;
    
    // if exponent is positive
    while (exp > 0) {
        result *= base;
        --exp;
    }
    
    // if exponent is negative
    while (exp < 0) {
        result /= base;
        ++exp;
    }
    
    printf("Answer = %lf", result);
    
    return 0;
}
#include<stdio.h>
double power(double base, int exp);
int main() 
{
    double base = 2.32;
    int exp = -2;
    double result = 1.0;
    
    result = power(base, exp);
    
    printf("%lf ^ %d = %lf", base, exp, result);
    
    return 0;
}

double power(double base, int exp) {
    if (exp > 0)
        return (power(base, exp - 1) * base);
    else if (exp < 0)
        return (power(base, exp + 1) / base);
    else
        return 1;
}
