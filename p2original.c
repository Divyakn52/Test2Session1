#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the points\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int a;
  a=0.5*x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  return a;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if (istriangle==0)
  {
  printf("it does not form triangle\n");
  }
  else 
  {
  printf("it forms triangle");
  }
}
int main()
{
  float x1,x2,y1,y2,x3,y3,istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}