#include<stdio.h>
void input ( float *base, float *height)
{
  printf("enter the values of base and height\n");
  scanf("%f%f",base,height);
}

void find_area ( float base,float height,float *area)
{
  *area = 0.5*base*height;
}

void output(float base, float height,float area )
{
  printf("the area of triangle is %f\n",area);
}

int main ()
{
  float b,h,a;
  input(&b,&h);
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
}

