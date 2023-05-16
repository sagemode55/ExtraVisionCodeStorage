#include <stdio.h>
// Returns true if n is even, else odd
int isEven(int num)
{
    // num & 1 is 1, then odd, else even
    return (!(num & 1));
}
int main ()
{
    int number;
    printf ("Insert a number \n");
    scanf ("%d", &number);

    //Checking if the number is divisible by 2
    if (number % 2 == 0)
        printf ("Even");
    else
        printf ("Odd");
  
    int number;
    printf ("Insert a number \n");
    scanf ("%d", &number);
    
    //Checking if the number is divisible by 2
    number % 2 == 0? printf ("Even"):printf ("Odd");
    
  
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    isEven(num)? printf ("Even"):printf ("Odd");
  
    return 0;
}
