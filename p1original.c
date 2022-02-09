#include <stdio.h>


void input(float *base, float *height)
{
 
  printf("Base=\n");
  scanf("%f",&*base);
  
  printf("height=\n");
  scanf("%f",&*height);
}
void find_area(float base, float height,float*area)
{

  *area=((base*height)/2);
  

}
void output(float area)
{
  printf("the area is %f\n",area);
  
}

int main()
{
  float height,base,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(area);
  return 0;

}
