#include <stdio.h>
int main()
{
    int num = 23;
      
    //Conditions to check if the number is negative/positive or zero
    if (num > 0)
         printf("The number is positive");
    else if (num < 0)
        printf("The number is negative");
    else
        printf("Zero");
    
    return 0;
  
    int num1 = -4;
    
    //Condition to check if the 0, positive or negative
    
    if(num1 == 0)
        printf("Zero");
    else
        (num1 > 0) ? printf("Positive"): printf("Negative");
    
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int num = -10;
    
//     //Condition to check if num is negative/positive or zero
//     if (num >= 0)
//     {
//         if (num == 0)
//             printf("The number is 0");
//         else
//             printf("The number is Positive");
//     }
//     else
//         printf("The number is Negative");
    
//     return 0;
// }

