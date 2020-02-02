#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>

/* In this example we are solving
   2x + 4y + 2z = 15
   2x + y + 2z = -5
   4x + y - 2z = 0
*/
/* Equations:
   x = (15-4y-2z)/2
   y = (-5-2x-2z)
   z = (4x+y)/2
*/
/* Defining function */
#define f1(x,y,z)  (15-4*y-2*z)/2
#define f2(x,y,z)  (-5-2*x-2*z)
#define f3(x,y,z)  (4*x+y)/2

/* Main function */
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;

 printf("Enter tolerable error:\n");
 scanf("%f", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

 getch();
 return 0;
}