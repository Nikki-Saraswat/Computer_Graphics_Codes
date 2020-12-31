#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
void flood(int x, int y, int new_col, int old_col) //Used for filling Colour in the scenery
{

    if (getpixel(x, y) == old_col) {

		putpixel(x, y, new_col);

		flood(x + 1, y, new_col, old_col);
  		flood(x - 1, y, new_col, old_col);
		flood(x, y + 1, new_col, old_col);
		flood(x, y - 1, new_col, old_col);
    }
}

void scaling_circle(int x,int y,int r) // Used for reducing the size of circle by using scaling transformation
{
    float scaling_factor=0.75;
    int r1=r*scaling_factor;
    circle(720,38,r1);

}

int main( )
{
int gd= DETECT,gm;
detectgraph(&gm,&gd);
initgraph(&gd,&gm,"c:\\CodeBlocks\\BGI");
rectangle(500,400,900,700);
setfillstyle(SOLID_FILL,12);
floodfill(510,410,15);
rectangle(380,400,500,700);
flood(381,401,5,0);          //side rectangle of house
rectangle(570,490,630,550);
flood(571,491,1,12)    ;              //window rectangle
line(590,490,590,550);   //window line
line(610,490,610,550);    //window line
line(570,510,630,510); //window line
line(570,530,630,530);  //window line
line(630,490,630,550); //window line
rectangle(740,490,800,550);
flood(741,491,1,12);                 //second window
line(760,490,760,550);//window line
line(780,490,780,550);//window line
line(740,510,800,510);//window line
line(740,530,800,530);//window line
//humnan
circle(950,560,35);
flood(951,561,8,0);
line(955,593,955,690);
line(955,620,915,630);
line(955,620,995,630);
line(955,690,915,720);
line(955,690,995,720);
//mountains
line(0,0,80,130);
line(80,130,160,0);
line(160,0,240,130);
line(240,130,320,0);
line(320,0,400,130);
line(400,130,480,0);
line(480,0,560,130);
line(560,130,640,0);
line(640,0,720,130);
flood(70,50,6,0);
flood(230,50,6,0);
flood(390,50,6,0);
flood(550,50,6,0);
line(640,0,1540,0);
circle(719,38,40); //sun
scaling_circle(719,38,40);
flood(720,38,14,0);
line(720,130,800,0);
line(800,0,880,130);
line(880,130,960,0);
flood(880,50,6,0);
line(960,0,1040,130);
line(1040,130,1120,0);
flood(1039,50,6,0);
line(1120,0,1200,130);
line(1200,130,1280,0);
flood(1199,50,6,0);
line(1279,0,1361,130);
line(1360,130,1440,0);
flood(1359,50,6,0);
line(1440,0,1540,130);
flood(1530,50,6,0);



line(380,400,440,320);//triangle
line(500,400,440,320);//triangle
flood(390,410,13,0);
flood(390,410,11,15);
circle(440,370,15);//circle in triangle
flood(441,371,11,0);
line(440,320,870,320);//up  line
line(500,320,560,400);//mid lines
line(560,320,620,400);
line(620,320,680,400);
line(680,320,740,400);
line(740,320,800,400);
line(800,320,860,400);
line(870,320,900,400);//connected line
rectangle(400,550,480,700);
flood(401,551,8,5); //door
flood(401,551,4,9);
line( 410,640,430,640); //door handle
line(415,642,425,642);
//tree
line(1100,550,1100,850);
line(1200,550,1200,850);
line(1100,550,1200,550);
line(1100,850,1200,850);
line(100,550,100,850);
line(200,550,200,850);
line(100,550,200,550);
line(100,850,200,850);
circle(1150,400,147);
flood(1101,551,6,0);
flood(101,551,6,0);
circle(150,400,147);
flood(1151,401,2,0);
flood(151,401,2,0);
setfillstyle(1,9);
floodfill(70,140,15);
//birds
setcolor(BLACK);
line(260,160,300,190);
setcolor(BLACK);
line(300,190,340,160);
setcolor(BLACK);
line(400,140,440,160);
setcolor(BLACK);
line(440,160,480,140);
setcolor(BLACK);
line(870,135,910,165);
setcolor(BLACK);
line(910,165,950,135);
setcolor(BLACK);
line(1000,135,1040,165);
setcolor(BLACK);
line(1040,165,1080,135);
getch( );
delay(10000);
closegraph();
return 0;
}
