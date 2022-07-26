
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;

void delay()
{
    for(int i=0;i<50000;i++)
    {
        for(int i=0;i<1000;i++)
        {
            
        }
    }
}

int gcd(int n,int k)
{     delay();
    if(n==k)
    { 
        return k;
    }
    else{
        if(n>k) gcd(n-k,k);
        else gcd(n,k-n);
    }
   
}
int main()

{    int m,n;
     printf("enter two numbers");
     scanf("%d %d", &m,&n);

     start=clock();
    printf("%d",gcd(m,n));
    end=clock();
    
    printf("\n %f \n",((double)(end-start)/CLOCKS_PER_SEC));
    
    return 0;
}

