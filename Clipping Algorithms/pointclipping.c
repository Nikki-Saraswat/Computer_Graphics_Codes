#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void point_check(int xmin,int ymin, int xmax, int ymax, int x, int y)
{
if ((xmin<x) && (x<xmax))
      {
         if ((ymin<y) && (y<ymax))
        {
          printf("The point is inside the  window\n");

        }
     }
     else
          printf("The point is outside the window \n");

}
int main( )
{
int gm,gr,xmin,ymin,xmax,ymax,x,y;
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"c:\\CodeBlocks\\BGI");
printf("Enter the minimum coordinates of the window\n");
scanf("%d%d",&xmin,&ymin);
printf("Enter the maximum coordinates of the window\n");
scanf("%d%d",&xmax,&ymax);
rectangle(xmin,ymin,xmax,ymax);
printf("Enter the coordinates of the point you want to check, whether the point is inside or outside\n");
scanf("%d%d",&x,&y);
putpixel(x,y,12);
point_check(xmin,ymin,xmax,ymax,x,y);
getch();
return 0;


}
