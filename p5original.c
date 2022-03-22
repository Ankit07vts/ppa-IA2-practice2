#include <stdio.h>
int input()
{
  int n;
  printf("Enter the the number\n");
  scanf("%d",&n);
  return n;
  
}

int gcd(int a,int b)
{
 int i,gcd;

  for (i=1;i<a/2;i++)
    {
      if(a%i==0 && b%i==0)
        gcd=i;
      }
   return gcd;
  
    }
  


void output(int a,int b,int gcd)
{
  printf("the hcf of %d and %d is %d\n",a,b,gcd);
  
  
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=gcd(a,b);
  output(a,b,c);
  return 0;
  
}