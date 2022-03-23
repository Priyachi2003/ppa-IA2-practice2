struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  Triangle n;
  printf("enter the values\n");
  scanf("%f",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle a;
  printf("enter the values of base and altitude\n");
  scanf("%f %f",a.base,a.altitude);
}
void input_n_triangles(int n, triangle t[n])
{
  
}
