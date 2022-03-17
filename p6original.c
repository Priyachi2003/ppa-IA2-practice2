#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the word\n");
  scanf("%s",a);
  
}
char str_reverse(char *a)
{
  for(int i=0;a[i]!='\0';i++)
    {
       printf("%d",a[i]);
    }
    
}
void output(char *a,char *reversea)
{
  for(int i=4;a[i]!=0;i--)
    {
      printf("%d",reversea[i]-1);
    }
}
int main()
{
  char str[20],a;
  input_string(str);
  str_reverse(str);
  output(&a,str);
}