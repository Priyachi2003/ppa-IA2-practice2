#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  for(int i=4;i<n/2;i++)
  {
  printf("the number is composite");
}
return 0;
}
void output(int n,int composite)
{
  for(int i=4;i<n/2;i++)
{
  if(n>2)
  printf("%d is composite number",n);
  
  printf("%d is %d",i,composite);
}
}
int main()
{
  int a,n,composite;
  a=input_number();
 composite= is_composite(n);
  output(n,composite);
  //return composite;
}

