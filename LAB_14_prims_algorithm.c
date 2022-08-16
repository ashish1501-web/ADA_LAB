/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int parent[10],value[10],mstSet[10];
int g[10][10];

int minvertex(int n)
{
    int min=999;
    int vertex;
    for(int j=0;j<n;j++)
    {
        if(mstSet[j]==0 && value[j]<min)
        {
            min=value[j];
            vertex=j;
        }
    }
    return vertex;
}

void prims(int V)
{
    for(int i=0;i<V-1;i++)
    {
        int u=minvertex(V);
        mstSet[u]=1;

        for(int j=0;j<V;j++)
        {
            if(mstSet[j]==0 && g[u][j]<value[j] && g[u][j]!=0 )
            {
                value[j]=g[u][j];
                parent[j]=u;
            }
        }
    }
}


int main()
{
    int n;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    parent[0]=-1;
    
    for(int i=0;i<n;i++)
    {
        mstSet[i]=0;
        value[i]=999;
    }
    value[0]=0;
    
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&g[i][j]);
        }
   }
     
    prims(n);

    for(int i=1;i<n;i++)
    {
       printf("%d----%d=>weight=%d\n",parent[i],i,value[i]);
    }
    

    return 0;
}

/*0 4 6 0 0 0
4 0 6 3 4 0
6 6 0 1 0 0
0 3 1 0 2 3
0 4 0 2 0 7
0 0 0 3 7 0*/

