#include<stdio.h>
int input()
{
  int a;
  printf("enter the numbers\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int i,gcd;
  for(i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        gcd=i;
    }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  
}