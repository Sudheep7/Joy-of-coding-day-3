#include<stdio.h>
int main()
{
    int n,i=0,l,j,num[100];
    printf("Enter the number:\n");
    scanf("%d", &n);
    l=n;
    while(l!=0)
    {
        num[i]=l%10;            
        i++;                    
        l=l/10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(num[j]==0)           
        {
            continue;           
        }
        printf("%d\t", num[j]);
    }
    return 0;
}

