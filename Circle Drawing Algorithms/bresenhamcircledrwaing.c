#include <graphics.h>
#include <stdlib.h>
#include<windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

    void EightWaySymmetricPlot(int xc,int yc,int x,int y)
   {
    putpixel(x+xc,y+yc,RED);
    putpixel(x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,-y+yc,RED);
    putpixel(-x+xc,y+yc,YELLOW);
    putpixel(y+xc,x+yc,RED);
    putpixel(y+xc,-x+yc,YELLOW);
    putpixel(-y+xc,-x+yc,RED);
    putpixel(-y+xc,x+yc,YELLOW);
   }

    void Circle_drwaing_bresenham(int xc,int yc,int r)
   {
    int x=0,y=r,d;
    d=3-(2*r);
    EightWaySymmetricPlot(xc,yc,x,y);
    while(x<=y)
     {
      if(d<=0)
             {
        d=d+(4*x)+6;
        x=x+1;
      }
     else
      {
        d=d+(4*x)-(4*y)+10;
        y=y-1;
        x=x+1;
      }
       EightWaySymmetricPlot(xc,yc,x,y);
      }
    }

int  main(void)
{
int xc,yc,r,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "C:\\CODE BLOCKS\\BGI");
printf("Enter the coordinates of the centre ");
scanf("%d%d",&xc,&yc);
printf("Enter the value of radius ");
scanf("%d",&r);
Circle_drwaing_bresenham(xc,yc,r);
getch();
return 0;
}
