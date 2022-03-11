#include<stdio.h>
int input_number()
{
  int n;
  printf("enter any number");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
    {
      if(n % i==0)
        count++;
    /* else
   return 0;*/
}
  }
void output(int n,int count)
{
  if(count>2)
    printf("%d is composite\n",n);
  else
    printf("%d is not composite",n);
}
int main()
{
  int n,count,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,count);
  return 0;
  
}