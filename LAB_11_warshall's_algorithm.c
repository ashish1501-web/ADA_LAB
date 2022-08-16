#include <stdio.h>


void shortestPath(int n ,int arr[n][n])
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               
                    arr[i][j]=arr[i][j]||(arr[i][k]&&arr[k][j]);
                
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
