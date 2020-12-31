#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#define PI 3.14

float arr[3][2];
float rotation[2][2];
 float p[1][2];


void draw( float arr[3][2])
{
setcolor(2);
line(arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
setcolor(2);
line(arr[1][0],arr[1][1], arr[2][0],arr[2][1]);
setcolor(2);
line(arr[2][0],arr[2][1],arr[0][0],arr[0][1]);
}

 void findNewCoordinate( float p[ ][2],float transformation[ ][2])
{

    float temp[1][2]={0,0};

    int i,j,k;
 for ( i = 0; i < 1; i++)
        for ( j = 0; j < 2; j++)
            for ( k = 0; k < 2; k++)
            {


                temp[i][j] = temp[i][j] +(p[i][k]*transformation[k][j] );

            }
    p[0][0] = temp[0][0];
    p[0][1] = temp[0][1];

}

void rot( )
{
    int i,j,angle;
    double val = PI / 180.0;
    printf("%f\n",val);
    printf("Enter the value of angle in degree\n");
    scanf("%d",&angle);
    double in_radian=(val*angle);
    printf("%f\n",in_radian);
    rotation[0][0]=cos(in_radian);
    rotation[0][1]= sin(in_radian);
    rotation[1][0]= - sin(in_radian);
    rotation[1][1]=cos(in_radian);
    printf("Rotation matrix\n");
  for(i=0;i<2;i++)
{


    for(j=0;j<2;j++)
    {

        printf("%f   ",rotation[i][j]);
    }
    printf("\n");
}
printf("\n\n\n");
float p[1][2];

    for(i=0;i<3;i++)
    {

        for(j=0;j<1;j++)
        {

            p[0][0]=arr[i][j];
            p[0][1]=arr[i][j+1];

            findNewCoordinate(p,rotation);

        arr[i][j] = p[0][0];
        arr[i][j+1] = p[0][1];

        }
    }

    printf("After Rotation\n");
  for(i=0;i<3;i++)
{


    for(j=0;j<2;j++)
    {

        printf("%f  ",arr[i][j]);
    }
    printf("\n");
}
setcolor(3);
line(arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
setcolor(3);
line(arr[1][0],arr[1][1], arr[2][0],arr[2][1]);
setcolor(3);
line(arr[2][0],arr[2][1],arr[0][0],arr[0][1]);

}


void scaling_transformation( )
{
    float scaling[2][2];

    int i,j,k;
    printf("Enter the scaling coordinates\n");
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {

            scanf("%f",&scaling[i][j]);
        }
    }
    printf("Scaling matrix\n");
  for(i=0;i<2;i++)
{


    for(j=0;j<2;j++)
    {

        printf("%f   ",scaling[i][j]);
    }
    printf("\n");
}
printf("\n");

    for(i=0;i<3;i++)
    {

        for(j=0;j<1;j++)
        {

            p[0][0]=arr[i][j];
            p[0][1]=arr[i][j+1];

            findNewCoordinate(p,scaling);

        arr[i][j] = p[0][0];
        arr[i][j+1] = p[0][1];

        }
    }
    printf("After scaling\n");
  for(i=0;i<3;i++)
{


    for(j=0;j<2;j++)
    {

        printf("%f   ",arr[i][j]);
    }
    printf("\n");
}
setcolor(3);
line(arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
setcolor(3);
line(arr[1][0],arr[1][1], arr[2][0],arr[2][1]);
setcolor(3);
line(arr[2][0],arr[2][1],arr[0][0],arr[0][1]);

}


int main( )
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"\\bgi ");
int i,j,choice;
printf("Enter the three coordinates for the triangle in the manner (x,y) \n");
for(i=0;i<3;i++)
{


    for(j=0;j<2;j++)
    {

        scanf("%f",&arr[i][j]);
    }
}
printf("Row Vector form\n");
printf("The original matrix of triangle is\n");
for(i=0;i<3;i++)
{


    for(j=0;j<2;j++)
    {

        printf("%f   ",arr[i][j]);
    }
    printf("\n");
}
draw(arr);
printf("Enter 1 for scaling and 2 for rotation\n");
scanf("%d",&choice);
if(choice == 1)
{
 scaling_transformation( );
}
else if(choice == 2)
{

 rot();
}
else
{
    printf("Choice not found\n");
}

getch();
return 0;
}
