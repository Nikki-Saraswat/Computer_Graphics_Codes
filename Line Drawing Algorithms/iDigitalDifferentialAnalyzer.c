
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
    printf("Enter the co-ordinates of two points\n");
    scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
putpixel(x, y, WHITE);
        x += dx;
        y += dy;
        i=i+1;
    }
    getch();
    closegraph();
    return 0;
}
