#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.141592653
int main(){
    int gdriver=DETECT, gmode, x, y, radius;
    double theta;
    
    printf("Enter the x and y coordinate of the circle:\n");
    scanf("%d%d", &x,&y);
    printf("Enter the radius: ");
    scanf("%d",&radius);
    printf("Enter the angle of rotation: ");
    scanf("%lf",&theta);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);

    setcolor(BLUE);
    circle(x, y, radius);

    theta = (theta * PI)/180;
    x = x*cos(theta) - y*sin(theta);
    y = y*cos(theta) + x*sin(theta);

    setcolor(GREEN);
    circle(x, y, radius);
    getch();
    closegraph();
    return 0;
}
