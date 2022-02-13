#include<stdio.h>
int input_side()
{
  int side;
  printf("enter a side of a triangle;\n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
  return 0;
}

void output(int a, int b, int c, int isScalene)
{
  if(isScalene)
  {
    printf("the triangle with sides %d,%d and %d is Scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d,%d and %d is not Scalene\n",a,b,c);
  }
  }
  
  int main()
  {
    int a,b,c,res;
    a=input_side();
    b=input_side();
    c=input_side();
    res = check_scalene(a,b,c);
    output(a,b,c,res);
    return 0;
  }