#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selection_sort(long long int a[],long long int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
   
    return;
}
void bubble_sort(long long int a[],long long int n)
{
    
      for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }}
      
    
    return;
}
int main()
{
    printf("Enter no of elements:\n");
    long long int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
       { a[i]= rand();}
    clock_t start,end;
    long int t;
    start=clock();
    selection_sort(a,n);
    end=clock();
    t=end-start;
    printf("Total time elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
     printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
}
