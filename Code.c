#include <stdio.h>
#include <math.h>

void printFact(int n){
    
    // Same i used in other for loop
    int i;
    // to avoid double printing
    int flag = 0;
    
    for(i = 1; i <= sqrt(n); i++) 
    { 
        if (n % i == 0) 
            printf("%d, ", i); 

        // To avoid double printing of equal pairs 
        // Example (10,10) we only want to print once 
        if(i == n/i) 
            flag = 1; 
    } 

    // if flag is '1' then we had double pairs like (10,10) 
    // we should do i-- so as not to do double printing of pair divisor 
    // doing i -=2 rather than i-- as in previous for loop we exited 
    // with i++, example, i = 10 became 11 and we need to start with 9 
    // so as to ignore 10 as its a double pair 
    if(flag) 
        i -= 2; 


    // printing pairs 
    for(;i>=1;i--)
    {
        if (n % i == 0)
            printf("%d, ", n/i);
    }
}

//main Program
int main()
{
    int n = 100;
    
    printFact(n);
}
// Time Complexity: O(sqrt(N))
// Space Complexity: O(1)
