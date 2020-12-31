#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int x1,y1,x2,y2,x3,y3;

void draw( )
{
setcolor(2);
line(x1,y1,x2,y2);
setcolor(2);
line(x2,y2,x3,y3);
setcolor(2);
line(x3,y3,x1,y1);
}
void tri(int x,int y)
{
    int a1,a2,a3,b1,b2,b3;


    a1=x1+x;
    b1=y1+y;
    a2=x2+x;
    b2=y2+y;
    a3=x3+x;
    b3=y3+y;
    setcolor(3);
    line(a1,b1,a2,b2);
    setcolor(3);
    line(a2,b2,a3,b3);
    setcolor(3);
    line(a3,b3,a1,b1);
}
int main( )
{
 int gd=DETECT,gm;
int c,x,y;
initgraph(&gd,&gm," ");
printf("Enter the 1st point for the triangle:");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd point for the triangle:");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd point for the triangle:");
scanf("%d%d",&x3,&y3);
printf("Enter the Transaction coordinates");
scanf("%d%d",&x,&y);
draw( );
tri( x,y);
getch( );
return 0;

}
