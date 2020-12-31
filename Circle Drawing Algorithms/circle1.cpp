#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include<conio.h>
#include<windows.h>
void Point_Plot(int xc,int yc,int x,int y)
   {
    putpixel(x+xc,y+yc,RED);
    putpixel(x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,-y+yc,WHITE);
    putpixel(-x+xc,y+yc,YELLOW);
    putpixel(y+xc,x+yc,RED);
    putpixel(y+xc,-x+yc,WHITE);
    putpixel(-y+xc,-x+yc,RED);
    putpixel(-y+xc,x+yc,WHITE);
   }
   void Point_decision(int xc,int yc,int r)
   {
    int x=0,y=r,d;
    d=5/4-r;
    Point_Plot(xc,yc,x,y);
    while(x<=y)
     {
      if(d<=0)
             {
        d=d+(2*x)+3;
        x=x+1;
      }
     else
      {
        d=d+(2*(x-y))+5;
        y=y-1;
        x=x+1;
      }
       Point_Plot(xc,yc,x,y);
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
Point_decision(xc,yc,r);
getch();
return 0;
}
