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
  int i,count=0;
  for(int i=1;i<=n;i++)
    {

      if(n%i==0)
        count++;
    }
  return count;
}
void output(int n,int composite)

{

  if(composite>2)
  printf("%d is composite number\n",n);

  else
  printf("%d is prime nor\n",n);

}
int main()
{
  int n,composite;
  n=input_number();
 composite= is_composite(n);
  output(n,composite);
  return 0;
}

