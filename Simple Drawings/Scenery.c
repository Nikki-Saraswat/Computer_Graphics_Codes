# include<stdio.h>
# include<graphics.h>
# include<windows.h>
# include<conio.h>
int main( )
{
   int gd= DETECT,gm;
   detectgraph(&gm,&gd);
initgraph(&gd,&gm,"c:\\CodeBlocks\\BGI");
rectangle(500,400,900,700);    //mainframe
rectangle(380,400,500,700);    //side rectangle of house
rectangle(570,490,630,550);  //window rectangle
line(590,490,590,550);   //window line
line(610,490,610,550);    //window line
line(570,510,630,510); //window line
line(570,530,630,530);  //window line
line(630,490,630,550); //window line
rectangle(740,490,800,550); //second window
line(760,490,760,550);//window line
line(780,490,780,550);//window line
line(740,510,800,510);//window line
line(740,530,800,530);//window line
//humnan
circle(950,560,35);
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
circle(719,38,40);
line(720,130,800,0);
line(800,0,880,130);
line(880,130,960,0);
line(960,0,1040,130);
line(1040,130,1120,0);
line(1120,0,1200,130);
line(1200,130,1280,0);
line(1280,0,1360,130);
line(1360,130,1440,0);
line(1440,0,1540,130);
//birds
line(260,160,300,190);
line(300,190,340,160);
line(400,140,440,160);
line(440,160,480,140);
line(870,135,910,165);
line(910,165,950,135);
line(1000,135,1040,165);
line(1040,165,1080,135);
line(380,400,440,320);//triangle
line(500,400,440,320);//triangle
circle(440,370,15);//circle in triangle
line(440,320,870,320);//up  line
line(500,320,560,400);//mid lines
line(560,320,620,400);
line(620,320,680,400);
line(680,320,740,400);
line(740,320,800,400);
line(800,320,860,400);
line(870,320,900,400);//connected line
rectangle(400,550,480,700); //door
line( 410,640,430,640); //door handle
line(415,642,425,642);
//tree
line(1100,550,1100,850);
line(1200,550,1200,850);
line(1050,550,1100,550);
line(1200,550,1250,550);
line(1050,550,1170,250);
line(1250,550,1170,250);
//River
line(80,130,120,230);
line(120,230,80,330);
line(80,330,120,430);
line(120,430,80,530);
line(80,530,120,630);
line(120,630,80,730);
line(80,730,120,830);
line(240,130,270,230);
line(270,230,240,330);
line(240,330,270,430);
line(270,430,240,530);
line(240,530,270,630);
line(270,630,240,730);
line(240,730,270,830);
getch();
return 0;
}
