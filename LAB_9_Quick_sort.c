/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include <stdlib.h>
 #include<time.h>
 
 void delay()
 {
      for(int i=0;i<100000;i++)
      {
           
      }
 }
void quicksort(int number[25],int first,int last){
     delay();
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main(){
    clock_t start, end;
   int i, count, number[10000];
   
   printf("How many elements are u going to enter?: ");
   
   scanf("%d",&count);
   for(i=0;i<count;i++)
   {
       number[i]=i+1;
   }
   start=clock();
   quicksort(number,0,count-1);
   end=clock()-start;
   
   
   printf("\ntime taken %f", (double)(end)/CLOCKS_PER_SEC);
   return 0;
}

