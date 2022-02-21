#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the values of(x1,y1),(x2,y2)");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("the distance between point (%f,%f) and (%f,%f) is (%f)",x1,y1,x2,y2,area);
}
void main()
{
  float a1,b1,a2,b2,distance;
  input(&a1,&b1,&a2,&b2);
  find_distance(a1,b1,a2,b2,&distance);
  output(a1,b1,a2,b2,distance);
}
