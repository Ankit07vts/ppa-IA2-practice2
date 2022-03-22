#include <stdio.h>

void input(float *base, float *height)
{
 
  printf("Base=\n");
  scanf("%f",base);
  
  printf("height=\n");
  scanf("%f",height);
}
void find_area(float base, float height,float*area)
{

  *area=((base*height)/2);
  

}
void output(float base,float height,float area)
{
  printf("the area of %f anf %f is %f\n",base,height,area);
  
}

int main()
{
  float height,base,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;

}
