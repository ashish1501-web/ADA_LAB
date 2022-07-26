/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;

int delay()
{
    for(int i=0;i<5000;i++)
    {
        for(int i=0;i<10;i++)
    {
        
    }
    }
}
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
   {   
        
     int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
       if(min!=i)
       {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
       }
    }
}
int main()
{  int n=1000;
     
     while(n<=12000){
    int arr[n];
    
  
    for(int i = 0; i<n; i++)
        arr[i]=i+1;
    start=clock();
    sort(arr,n);
    end=clock();
//    for(int i=0;i<n;i++)
//    {
//         printf("%d\t",arr[i]);
//    }
    
    printf("Loop executed in ::%f\n",((double)(end-start)/CLOCKS_PER_SEC));
    n+=1000;
     }
    return 0;
}


