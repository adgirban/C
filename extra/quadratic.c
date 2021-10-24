#include <stdio.h>

float sqrt(float n)
{
 float start, end, mid;
 start = 0, end = n;
 while ((end - start) >= 0.00001)
 {
  mid = (start + end) / 2;
  if (mid * mid < n)
  {
   start = mid;
  }
  if (mid * mid >= n)
  {
   end = mid;
  }
 }
 return mid;
}

int main()
{
 float a, b, c, d, rootd, p, x1, x2, realroot, imagroot;
 printf("Enter a,b,c of equation: ");
 scanf("%f %f %f", &a, &b, &c);
 d = (b * b) - (4 * a * c);
 if (d < 0)
 {
  rootd = sqrt(-d);
  printf("Roots are imaginary.\n");
  x1 = (-b) / (2 * a) + (-rootd) / (2 * a);
  x2 = (-b) / (2 * a) - (-rootd) / (2 * a);
  realroot = (x1 + x2) / 2;
  imagroot = (x1 - x2) / 2;
  printf("Root 1 = %.3f + %.3fi\n", realroot, imagroot);
  printf("Root 2 = %.3f - %.3fi\n", realroot, imagroot);
 }
 else
 {
  p = -b;
  rootd = sqrt(d);
  printf("Roots are real.\n");
  if (p > 0)
  {
   x1 = (-b) / (2 * a) + (rootd) / (2 * a);
  }
  else
  {
   x1 = (-b) / (2 * a) - (rootd) / (2 * a);
  }
  x2 = c / (a * x1);
  printf("Root 1 = %.3f\nRoot 2 = %.3f", x1, x2);
 }
 return 0;
}