#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter the values\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle a;
  printf("enter the values of base and altitude\n");
  scanf("%f %f",&a.base,&a.altitude);
  return a;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=1;i<n;i++)
  {
  if(small.area>t[i].area)
    small.area=t[i].area;
  }
   return small;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    for(int i=0;i<n-1;i++)
      {
  printf("%f,%f and\n",t[i].base,t[i].altitude);
    }
  printf("%f,%f\n is \n triangle with base=%f and altitude =%f having area=%f\n",t[n-1].base,t[n-1].altitude,smallest.base,smallest.altitude,smallest.area);

}
  
int main()
{
    int n;
  Triangle t[n],small;

  n=input_n();
   input_n_triangles(n,t);
  find_areas_n(n,t);
 small = find_smallest_triangle(n,t);
  output(n,t,small);
  return 0;
  
  
}