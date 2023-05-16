#include <stdio.h>
#include <math.h>


// Armstrong number is any number following the given rule
// abcd... = a^n + b^n + c^n + d^n + ...
// Where n is the order(length/digits in number)

// Example = 153 (order/length = 3)
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// Example = 1634 (order/length = 4)
// 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634

// number of digits in a number is order
int order(int x)
 {
  int len = 0;
  while (x)
  {
    len++;
    x = x/10;
  }
  return len;
 }
  int getArmstrongSum(int num, int order){

  if(num == 0)
  return 0;

  int digit = num % 10;

  return pow(digit, order) + getArmstrongSum(num/10, order);
 }
int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}

int armstrong(int num, int len){

    int sum = 0, temp, digit;
    temp = num;
    
    // loop to extract digit, find power & add to sum
    while(temp != 0)
    {
        // extract digit
        digit = temp % 10;

        // add power to sum
        sum = sum + pow(digit,len);
        temp /= 10;
    };

    return num == sum;
}

// Driver Code
int main ()
{
  int num, len;
  num=1634;
  printf("The number is:%d\n",num); 

  // function to get order(length)
  len = order(num);

  // check if Armstrong
  if (num == getArmstrongSum(num, len))
    printf("%d is Armstrong", num);
  else
    printf("%d is Not Armstrong", num);
    //variables initialization
   int num = 1634, len;
 
    // function to get order(length)
    len = order(num);
    
    // check if Armstrong
    if (armstrong(num, len))
        printf("%d is armstrong\n",num);
    else
         printf("%d is not armstrong\n",num);


    return 0;
}
