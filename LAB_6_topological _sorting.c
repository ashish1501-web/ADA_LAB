
#include <stdio.h>
#include<conio.h>
int arr[10];
int top=-1;

int visited[10];
int g[10][10];
    
void push(int x)
{
     arr[++top]=x;
}

int pop()
{
     return arr[top--];
}

void dfs(int v,int n)
{
     
    
//    printf("%d",v);
     visited[v]=1;
   
    
   
        for(int j=0;j<n;j++)
        {
            if(g[v][j]==1 && visited[j]!=1)
            {   
                 dfs(j,n);
               
            }
               
        }
        push(v);
        
        
        
     return;
        
    
}

int main()
{   
     
    int n;
     printf("Enter the number of vertices:");
     scanf("%d",&n);
     
     printf("Enter the adjacency matrix:\n");
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               scanf("%d",&g[i][j]);
          }
     }
    for(int i=0;i<n;i++)
    {     if(visited[i]==0)
               dfs(i,n);
    }
    
    while(top!=-1)
    {
         printf("%d\t",pop());
    }
    return 0;
}

