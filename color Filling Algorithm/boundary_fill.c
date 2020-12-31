#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
void boundaryFill8(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y,fill_color);
        boundaryFill8(x + 1, y, fill_color, boundary_color);
        boundaryFill8(x, y + 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y, fill_color, boundary_color);
        boundaryFill8(x, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x - 1, y + 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y - 1, fill_color, boundary_color);
        boundaryFill8(x + 1, y + 1, fill_color, boundary_color);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int left,top,right,bottom,x,y;
    printf("Enter the coordinates for the rectangle\n");
    printf("Enter the left,top,right,bottom coordinate\n");
    scanf("%d%d%d%d",&left,&top,&right,&bottom);
    rectangle(left,top,right,bottom);
    printf("Enter any pixel inside the rectangle\n");
    scanf("%d%d",&x,&y);
    boundaryFill8(x, y, 6, 15);
    getch( );
    closegraph();
    return 0;
}
