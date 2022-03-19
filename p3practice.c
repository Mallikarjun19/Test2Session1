#include<stdio.h>
int input_number()
{
  int x;
  printf("enter the number: \n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  int i,z;
  for(i=2;i<n;i++)
  {
   for(i=2;i<n;i++)
     n=n%i;
  }
  if(n>0)
    z=2;
  else
    z=1;
}
void output(int n,int is_prime)
{
  int z;
 if(z==1)
   printf("%d is not prime number",n);
  else
   printf("%d is prime number",n);
}
void main()
{
  int n,y;
  n=input_number();
  y=is_prime(n);
  output(n,y);
}