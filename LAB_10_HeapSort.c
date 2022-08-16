/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void maxheapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(l<n && arr[largest]<arr[l])
    {
        largest=l;
    }
    if(r<n && arr[largest]<arr[r])
    {
        largest=r;
    }
    if(largest!=i)
    {
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        
        maxheapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n)
{
    for(int i=(n/2);i>=0;i--)
    {
        maxheapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        maxheapify(arr,i,0);
    }
}
int main()
{
    
    int n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    
    heapsort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}


