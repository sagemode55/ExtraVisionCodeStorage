#include <stdio.h> 
#include <math.h>

int main()
{
    int i,num = 17;
    int isPrime= 1;
    
    
    // 0, 1 and negative numbers are not prime
    if(num < 2){
        isPrime = 0;
    }
    else{
    // Number n is not a prime, it can be factored into two factors a & b:
    // n = a * b (Excluding 1 & n)

    /*Now a & b can't be both greater than the square root of n, since
    then the product a * b would be greater than sqrt(n) * sqrt(n) = n.
    So in any factorization of n, at least one of the factors must be
    smaller than the square root of n, and if we can't find any factors
    less than or equal to the square root, n must be a prime.
    */
        for(i=2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("%d is Prime", num);
    else
        printf("%d is not Prime", num);
 
    return 0;
}
//Time Complexity: O(√N)
//Space Complexity O(1)

// This code is better than previous code as we
// 1. Loop runs b/w [2,√num] rather than previous [2, n/2]

#include <stdio.h>
#include <math.h>

int isPrime(int n){
    // 0 and 1 are not prime numbers
    // negative numbers are not prime
    if (n <= 1)
        return 0;

    // special case as 2 is the only even number that is prime
    else if (n == 2)
        return 1;

    // Check if n is a multiple of 2 thus all these won't be prime
    else if (n % 2 == 0)
        return 0;

    // If not, then just check the odds
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    
    return 1;
}

int main() {
    int num=23;
    
    if (isPrime(num))
        printf("%d is prime", num);
    else
        printf("%d is not prime", num);

    return 0;
}
//Time complexity : O(√N)
//Space complexity : O(1)

//This code is better than previous code
// 1. We skipping all even iterations b/w [3, √num]
// Works almost 2x faster than method 4


#include <stdio.h>

int checkPrime(int n, int i)
{
    // we check if i is divisor of n or not here
    
    // 0, 1 & neg. nos are not prime
    if (n < 2)
        return 0;
    
    // if this satisfies then its prime as we
    // have completed recursion from 2 to n
    if (i == n)
        return 1;

    // Base cases
    if (n % i == 0)
        return 0;
       
    // none of above condition matches
    // keep checking for next divisor in i+1 recursion call
    i += 1;
    
    return checkPrime(n, i);
}
int main()
{
    int i=2;
    int num = 19;
    
    if(checkPrime(num, i))
        printf("%d is Prime",num);
    else
        printf("%d is Not Prime",num);

    return 0;
}
// Time complexity: O(N)
// Space complexity: O(1)
// Auxilary Space complexity: O(N)
// Due to function call stack
