#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
void floodfill(int x, int y, int new_col, int old_col)
{

 if (getpixel(x, y) == old_col)
        {
putpixel(x, y, new_col);
floodfill(x + 1, y, new_col, old_col);
floodfill(x - 1, y, new_col, old_col);
floodfill(x, y + 1, new_col, old_col);
floodfill(x, y - 1, new_col, old_col);
floodfill(x - 1, y - 1, new_col, old_col);
floodfill(x - 1, y + 1, new_col, old_col);
floodfill(x + 1, y - 1, new_col, old_col);
floodfill(x + 1, y + 1, new_col, old_col);
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
    floodfill(x, y, 12, 0);
    getch( );
    closegraph();
    return 0;
}
