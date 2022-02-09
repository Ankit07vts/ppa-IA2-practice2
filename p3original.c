#include <stdio.h>

int input()
{
  int x;
  printf("Enter the number:\n");
  scanf("%d", &x);
  return x;
}

int is_composite(int n)
{
  int i,c=0;
  for (i=2;i<=n/2;i++)
  {
    if (n%i==0)
      c=c+1;
  }
  return 0;
}

void output(int Composite)
{
  if (Composite==1)
    printf("the number is not a composite number\n");
  else 
    printf("the number is  a composite number\n");
}

int main()
{ 
  int a,b,n;
  a=input();
  b=is_composite(n);
  output(b);
  return 0;
}