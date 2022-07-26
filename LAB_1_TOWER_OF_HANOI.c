
#include <stdio.h>
#include<time.h>
clock_t start,end;

void delay()
{
    for(int i=0;i<50000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            
        }
    }
}
void TOH(int a,int b,int c,int n)
{   delay();
    if(n>0)
    {   
        TOH(a,c,b,n-1);
        printf("%d->%d\n",a,c);
        TOH(b,a,c,n-1);
    }
}
int main()
{   int n;
     printf("Enter the number of discs:");
	scanf("%d",&n);
	

    start=clock();
    TOH(1,2,3,n);
    end=clock();
   
    printf("Time taken to execute:%f",(double)((end-start)/CLOCKS_PER_SEC));
    return 0;
}

