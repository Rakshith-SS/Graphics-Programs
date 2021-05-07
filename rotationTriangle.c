#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.141592653
int main(){
    int gdriver=DETECT, gmode, x1, x2, x3, y1, y2, y3;
    double theta;

    printf("Enter the coordinates of vertex A: \n");
    scanf("%d%d", &x1,&y1);
    printf("Enter the coordinates of vertex B: \n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the coordinates of vertex C: \n");
    scanf("%d%d", &x3, &y3);
    printf("Enter the angle of Rotation: ");
    scanf("%lf",&theta);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);
    setcolor(BLUE);
   
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    //rotation
    theta = (theta * PI)/180;
    
    x1 = x1*cos(theta) - y1*sin(theta);
    x2 = x2*cos(theta) - y2*sin(theta);
    x3 = x3*cos(theta) - y3*sin(theta);

    y1 = y1*cos(theta) + x1*sin(theta);
    y2 = y2*cos(theta) + x2*sin(theta);
    y3 = y3*cos(theta) + x3*sin(theta);

    setcolor(GREEN);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    
    getch();
    closegraph();
}
