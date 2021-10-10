#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,k=0;
  printf("Enter the rows and columns : ");
  scanf("%d %d",&a,&b);
  int ar2d[a][b],*ar1d;
  printf("Enter elements ");
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      scanf("%d",&ar2d[i][j]);
    }
  }
  printf("2-D Array \n");
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      printf("%d  ",ar2d[i][j]);
    }
    printf("\n");
  }
  ar1d=(int *)malloc((a*b)*sizeof(int));
  for(int i=0;i<a;i++)
  {
  for(int j=0;j<b;j++)
  {
      ar1d[i*b+j]=ar2d[i][j];
  }
  }
  printf("\n 1D Array using row major order : ");
  for(int i=0;i<a*b;i++)
   {
     printf("%d  ",ar1d[i]);
   }
}
