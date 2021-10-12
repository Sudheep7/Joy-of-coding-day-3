#include <stdio.h>

int main()
{
    int num,count=0,i,digit;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Digits=");
    while(num!= 0)                  
    {
        digit = num % 10;          
        num = num / 10;           
        printf(" %d ", digit);
        count++;                 
    }
    printf("\nNumber of Digits = %d", count);
    return 0;
}
