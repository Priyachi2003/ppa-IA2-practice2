#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int a[n])
{
  int i;
  for(i=1;i<n;i++)
    {
   printf("enter the %dth number\n",i+1);
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum=0,count=0,i;
  for(i=1;i<n;i++)
    {
      count=count+i;
      if(count>2)
        sum=sum+a[i];
    }
  return sum;
  
}
void out_put(int sum)
{
  printf("sum of all composite numbers is %d",sum);
}
int main()
{
  int sum,n;
  n=input_array_size();
  int a[n];
  sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
  
}