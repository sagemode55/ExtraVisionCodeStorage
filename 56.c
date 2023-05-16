#include <stdio.h>

static int sum = 0;
int getSumDivisors(long num, int i)
{
    // since, all factors can be found will num/2
    // we will only check in this range
    if(i <= num/2)
    {
        if(num % i ==0)
            sum = sum + i;

        i++;
        // recursively call isPerfect
        getSumDivisors(num, i);
    }

    //returns the sum
    // when i becomes > num/2
    return sum;
}

int main ()
{
    int num = 28;
    
    if(getSumDivisors(num, 1) == num)
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);
    
    return 0;
}
// Time complexity: O(N)
// Space complexity: O(1)
// Auxiliary Space complexity: O(N) due to function call stack

#include <stdio.h>
#include <math.h>

int main ()
{
    int num = 28, sum = 0;
    
    for(int i = 1; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            // For num : (1, num) will always be pair of divisor
            // acc to def., we must ignore adding num itself as divisor
            // when calculating for perfect number
            if(i == 1)
                sum = sum + i;
            
            // Example For 100 (10,10)  will be one pair
            // But, we should add value to the sum just once
            else if(i == num/i)
                sum = sum + i;
            
            // add both pairs as divisors
            // For any divisor i, num/i will also be a divisor
            else
                sum = sum + i + num/i;
        }
    }
    
    if(sum == num)
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);
    

}
// Time complexity: O(sqrt(N))
// Space complexity: O(1)
