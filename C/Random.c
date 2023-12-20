#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void printRandoms(int lower, int upper, int sum) 
{ 
    int i; 
    int num;
 do{ 
        num = (rand() % 
        (upper - lower + 1)); 
        sum+=num;
        printf("%d ", num); 
    } while(num!=0); 
    printf("\n%d\n", sum);
} 
int main() 
{ 
    int lower = 0, upper = 6, sum =0; 
    srand(time(0)); 
    printRandoms(lower, upper, sum); 
    return 0; 
}
