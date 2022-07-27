
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;
void merge(int arr[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int b[10000];
    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
        {
            b[k++]=arr[i++];
        }
        else {
            b[k++]=arr[j++];
        }
    }
    
    while(i<=mid)
    {
        b[k++]=arr[i++];
    }
    while(j<=h)
    {
        b[k++]=arr[j++];
    }
    
    for(int k=l;k<=h;k++)
    {
        arr[k]=b[k];
    }
}
void mergesort(int arr[],int l,int h)
{    
     for(int i=0;i<10000;i++)
     {
          
     }
    if(l<h)
    {   int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}



int main()
{
     int n;
     
     
     
     n=1000;
     while(n<=10000)
   {
        int arr[n];
        for(int i=0;i<n;i++)
        {
             arr[i]=i+1;
        }
        start=clock();
         mergesort(arr,0,n-1);
         end=clock()-start;
         printf("Time for %d is:%f\n",n,(double)end/CLOCKS_PER_SEC);
     
         n+=1000;
        
   }
    return 0;
}

