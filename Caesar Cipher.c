#include <stdio.h>

int main()
{
   int num;
   int digit,sum=0, rev=0;
   printf("enter the original message ( number)\n");
   scanf("%d", &num);
   printf("the message is %d", num);
   while(num>0)
   {
       digit=num%10;
       if(digit!=9)  
          digit+=1;
        else
          digit=0;
       sum=sum*10+digit;
       num=num/10;
   }

    
    while(sum>0)
    {
        digit=sum%10;
        rev=rev*10+digit;
        sum=sum/10;
    }
    
    printf("\nthe codeword is %d", rev);
}



