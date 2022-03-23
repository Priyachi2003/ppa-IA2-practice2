#include<stdio.h>
struct _triangle
{
float b,h,area;
}; 
  typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle a;
  printf("enter the values\n");
  scanf("%f %f",&a.b,&a.h);
  return a;
}
void find_area(Triangle*t)
{
  t->area=0.5 * t->b * t->h;
}
void output(Triangle t)
{
  printf("the area of traingle with base %f &  altitude %f is %f",t.b,t.h,t.area);
}
int main()
{
  Triangle a;
  a=input_triangle();
  find_area(&a);
  output(a);
  return 0;
  
}