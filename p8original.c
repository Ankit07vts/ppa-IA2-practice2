#include <stdio.h>

struct _triangle
{
 float base,height,area;

};
typedef struct _triangle Triangle;

int input_n()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  return n;
  
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and altitude\n");
  scanf("%f%f",&t.base,&t.height);
  return t;
  
}

void input_n_triangles(int n,Triangle t[n])
{
  int i;
  
  for(i=0;i<n;i++)
    {
      t[i]=input_triangle();
      
    }
  
}

void find_area(Triangle*t)
{
  t->area=0.5*(t->base)*(t->height);
  
}

void find_areas_n(int n,Triangle t[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      find_area(&t[i]);
      
    }
}

Triangle find_smallest_triangle(int n,Triangle t[n])
{
  Triangle small;
  small=t[0];
  int i;

  for(i=1;i<n;i++)
    { if(small.area>t[i].area)
     {
      return t[i];
      
     }
    }
  return small;
  
}

void output(int n,Triangle t[n],Triangle small)
{
  for (int i = 0; i < n - 1; i++)
  {
    printf("Smallest among %0.1f, %0.1f and\n", t[i].base, t[i].height);
  }
  printf("%0.1f, %0.1f\nis\ntriangle with base = %0.1f and altitude = %0.1f having area = %0.1f\n", t[n-1].base, t[n-1].height, 
  small.base, small.height, small.area);
}
int main()
{
  int n = input_n();
  Triangle t[n];
  input_n_triangles(n, t);
  find_areas_n(n, t);
  Triangle small = find_smallest_triangle(n, t);
  output(n, t, small);
  return 0;

}



