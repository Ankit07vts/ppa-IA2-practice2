#include <stdio.h>

struct _triangle{
float base,height,area;
};typedef struct _triangle Tri;

Tri input_triangle()
{
  Tri n;
  printf("Enter the triangle values\n");
  scanf("%f %f",&n.base,&n.height);
  return n;
}

void find_area(Tri*t)
{
  
  t->area=0.5*(t->base*t->height);
  
}

void output(Tri t)
{
  printf("the area of triangle is %f",t.area);
  
}

int main()
{
  Tri t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
  
  
}