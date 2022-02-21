#include<stdio.h>
void input_line(float *x1,float *y1)
{
  printf("enter the position of point x1,y1\n");
  scanf("%f%f",x1,y1);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int is_triangle;
  is_trinagle=0.5*(x1(y2-y3)+x2(y3-y1)+x3(y1-y2));
  if(is_triangle>0)
    return 1;
  else
    return 2;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int is_triangle)
{
  if()
}