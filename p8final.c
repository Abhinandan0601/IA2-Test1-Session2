#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int x;
  printf("number of triangle");
  scanf("%d",&x);
  return x;
}






Triangle input_triangle()
{
  Triangle b;
  printf("enter input for triangle");
  scanf("%f%f",&b.base,&b.altitude);
  return b;
}

void input_n_triangles(int n, triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i] = input_triangle();
    }
}

void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i =0; i<n; i++)
    {
      find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small.area = 0;
  for(int i=0; i<n; i++)
    {
       if(t[1].area>small.area)
       {
         small = t[i];
       }
    }
  return small;
  
}
void output(int n, Triangle t[n], Triangle smallest)
{
  for (int i = 0; i < n -1; i++)
    {
      printf("%0.if, %0.if and\n", t[i].base,t[i].altitude);
    }
  printf("%0.if, %0.if\nis\ntriangle with base = %0.if and altitude = %0.if having area = %0.if\n",t[n.1].base, t[n.1].altitude,smallest.base,smallest.altitude, smallest.area);
    
 
}

int main()
{

  int n=  input_n()
  Triangle t[n];
  input_n_triangles(n,t);
  
  find_areas_n(n,t);
  Triangle small = find_smallest_triangle(n,t);
  output(n,t,small);
  return 0;
}