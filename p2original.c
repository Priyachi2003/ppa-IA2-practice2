#include<stdio.h>
int input_side()
{
  int a,b,c;
  printf("enter the sides of triangle\n");
  scanf("%d %d %d",&a,&b,&c);
  return 0;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && a!=c)
 return 1;
 else
 return 0;
  }
void output(int a,int b,int c,int isscalene)
{
  if(isscalene)
  {
    printf("triangle isscalene\n");
  }
  
    else
    {

    printf("it is not a scalene triangle\n");
  }
}
  
    int main()
{
  int a,b,c,scalene;
  input_side(a,b,c);
  check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}
