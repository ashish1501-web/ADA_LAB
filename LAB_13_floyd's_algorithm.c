/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void shortestPath(int n ,int arr[n][n])
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]>arr[i][k]+arr[k][j])
                {
                    arr[i][j]=arr[i][k]+arr[k][j];
                }
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of vertices:");
    scanf("%d",&n);
     printf("Enter array elements:");
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    shortestPath(n,arr);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

