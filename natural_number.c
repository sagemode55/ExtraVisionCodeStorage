#include <stdio.h>
int getSum(int sum,int n)
{
    if(n==0) 
        return sum;
        
    return n+getSum(sum,n-1);
}
int main()
{
    int n; 
    scanf("%d",&n);
    
    int sum = 0;
    
    for(int i=1;i<=n;i++) 
        // is same as writing sum = sum + i
        sum += i;
        
    printf("Sum is %d",sum);
    int n; 
    scanf("%d",&n);
    
    int sum = n*(n+1)/2;

    printf("The sum is %d",sum);
    
    int n, sum = 0; 
    scanf("%d",&n);

    printf("%d",getSum(sum, n));
    
    return 0;
}
