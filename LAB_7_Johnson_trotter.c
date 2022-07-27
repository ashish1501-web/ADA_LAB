/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int search(int a[],int mobile,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==mobile)
        {
            return i;
        }
    }
    return -1;
}

int getMobile(int a[],int dir[],int n)
{   int mobile=0;
    for(int i=0;i<n;i++)
    {
        if(dir[a[i]-1]==0 && i!=0)
        {
            if(a[i]>a[i-1] && a[i]>mobile)
            {
                mobile=a[i];
            }
        }
        else if(dir[a[i]-1]==1 && i!=n-1)
        {
            if(a[i]>a[i+1] && a[i]>mobile)
            {
                mobile=a[i];
            }
        }
    }
    return mobile;
}

void Permutations(int a[],int dir[],int n)
{
    int mobile=getMobile(a,dir,n);
    // printf("%d",mobile);
    int pos=search(a,mobile,n);
    // printf("%d",pos);
    if(dir[a[pos]-1]==0 )
    {
        int temp=a[pos];
        a[pos]=a[pos-1];
        a[pos-1]=temp;
    }
    else if(dir[a[pos]-1]==1 )
    {
        int temp=a[pos];
        a[pos]=a[pos+1];
        a[pos+1]=temp;
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>mobile)
        {
            if(dir[a[i]-1]==0)
            {
                dir[a[i]-1]=1;
            }
            else if(dir[a[i]-1]==1 ){
                dir[a[i]-1]=0;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\t",dir[i]);
    // }
    printf("\n");
}

int main()
{
    int n=4;
    
    int a[]={1,2,3,4};
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    int dir[]={0,0,0,0};
    
    int total=fact(n);
    int count=1;
    // printf("%d",total);
    for(int i=1;i<total;i++)
    {
        Permutations(a,dir,n);
        count++;
    }
    printf("%d",count);

    return 0;
}

