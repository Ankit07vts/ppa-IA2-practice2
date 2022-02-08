#include <stdio.h>

void input( float*base,float*height)
{
  printf("Enter the base of triangle\n");
  scanf("%f",&*base);
  printf("Enter the height of triangle\n");
  scanf("%f",&*height);
  
}
void find_area(float base,float height,float*area)
{
  *area=((base*height)/2);
}
void output(float area)
{
  printf("The area of triangle is %f\n",area);
  
}
int main()
{
  float base,height,area;
  input(base,height);
  find_area(base,height,area);
  output(area);
  return 0;

}


