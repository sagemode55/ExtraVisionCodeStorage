#include <stdio.h>

int checkAutomorphic(int num){
    
    int square = num * num;
    
    while(num != 0)
    {
        // means not automorphic number
        if(num % 10 != square % 10){
            return 0;
        }
        
        // reduce down numbers
        num /= 10;
        square /= 10;
    }
    // if reaches here means automorphic number
    return 1;
}

int main ()
{
    int num = 376, square = num * num ;
    
    if(checkAutomorphic(num))
        printf("Num : %d, Square: %d - Automorphic Number",num, square);
    else
        printf("Num : %d, Square: %d - Not Automorphic Number",num, square);
    

}
// Time complexity: O(N)
// Space complexity: O(1)
