#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"poojan1.h"
int main()
{
 int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   circle(100, 100, 50);

   getch();
   closegraph();
   return 0;
}
