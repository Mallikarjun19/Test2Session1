#include<stdio.h>
int input()
{
  int x;
  printf("enter the value of n: \n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int a[n];
  a[0]=0;
  a[1]=1;
  int i;
  for(i=2;i<=n;i++)
    {
      a[i]=a[i-1]+a[i-2];
    }
  return a[n-1];
}
void output(int n,int fibo)
{
  printf("the %d th position have number %d in fibonacci sequence",n,fibo);
}
void main()
{
  int a,result;
  a=input();
  result=find_fibo(a);
  output(a,result);
}