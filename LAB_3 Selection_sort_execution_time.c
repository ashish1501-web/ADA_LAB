#include <stdio.h>
#include<time.h>
clock_t start,end;

int delay()
{
    for(int i=0;i<50000;i++)
    {
        for(int i=0;i<500;i++)
    {
        
    }
    }
}
void sort(int  arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {   delay();
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main()
{   
    int arr[6]={2,1,7,45,30,8};
    start=clock();
    sort(arr,6);
    end=clock();
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    printf("Loop executed in ::%f",((double)(end-start)/CLOCKS_PER_SEC));
    return 0;
}
