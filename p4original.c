#include<stdio.h>
int input();
{
  int n;
  printf("enter number of fibo to find\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int i,a=0,b=1,sum=0;
  for(i=1;i<n;i++)
    {
      sum=a+b;
      a=b
        b=sum
    }
  return sum;
}