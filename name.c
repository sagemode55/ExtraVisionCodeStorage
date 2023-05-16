#include <stdio.h>

// function to calculate factorial
int getFactorial(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int checkStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + getFactorial(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num = 145;
    
    if(checkStrong(num))
        printf("%d is Strong Number", num);
    else
        printf("%d is Not Strong Number", num);

}
// Time complexity: O(N^2)
// Space complexity: O(1)

// function to calculate factorial
int getFactorial(int num)
{
    if(num == 0)
        return 1;
        
    return num * getFactorial(num-1);
}

int checkStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + getFactorial(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num = 145;
    
    if(checkStrong(num))
        printf("%d is Strong Number", num);
    else
        printf("%d is Not Strong Number", num);

}
// Time complexity: O(N^2)
// Space complexity: O(1)
// Auxialiary Space complexity: O(N) bcz of function call stack
