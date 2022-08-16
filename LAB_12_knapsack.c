/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int knapsack(int W,int wt[],int val[],int n)
{
    int i,j;
    int K[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 ||j==0)
            {
                K[i][j]=0;
            }
            else if(wt[i-1]<=j)
            {
                if(K[i-1][j]>(val[i-1]+K[i-1][j-wt[i-1]]))
                {
                    K[i][j]=K[i-1][j];
                }
                else{
                    K[i][j]=(val[i-1]+K[i-1][j-wt[i-1]]);
                }
            }
            else{
                K[i][j]=K[i-1][j];
            }
        }
    }
    return K[n][W];
}

int main()
{
   
   
   int wt[]={1,2,3};
   int val[]={10,15,40};
   
   int W=6;  //capacity
   
   int n=3;
   
   printf("%d",knapsack(W,wt,val,n));

    return 0;
}
