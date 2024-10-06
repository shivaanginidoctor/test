#include <stdio.h>
#include <math.h>
int main()
{ float s,a,b,c,area;
  printf("input sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
  printf("the area of the triangle is %f\n",area);
  return 0;
}
