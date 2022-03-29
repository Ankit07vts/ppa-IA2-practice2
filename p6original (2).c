#include <stdio.h>

void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}

int str_reverse(char*a)
{
  int i,m=0;
  for(i=0;a[i]!="\0",i++)
  {
    m++;
    
  
  return m;
    }
}

void output(char*a,char reversea)
{
  printf("The reverse of fo the sytring is");
  for (int =reversea-1;a[i]="\0";i--)
   printf("%c",a[i]);
  
}

int main()
{
  chaer a[50];
  input_string(a);
  reversea=str_reverse(a);
  output(a,reversea);
  return 0;
  
}
