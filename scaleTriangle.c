#include<stdio.h>
#include<graphics.h>
int main(){
    int gdriver=DETECT, gmode, x1, x2, x3, y1, y2, y3; 
    float sx, sy;

    printf("Enter the coordinate of vertex A:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the coordinate of vertex B:\n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the coordinate of vertex C:\n");
    scanf("%d%d", &x3, &y3);
    printf("X-scaling Factor: ");
    scanf("%f",&sx);
    printf("Y-Scaling Factor: ");
    scanf("%f",&sy);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);

    setcolor(BLUE);

    line(x3, y3, x1, y1);
    line(x2, y2, x3, y3);
    line(x1, y1, x2, y2);

    x1 = x1*sx;
    x2 = x2*sx;
    x3 = x3*sx;
    y1 = y1*sy;
    y2 = y2*sy;
    y3 = y3*sy;

    setcolor(GREEN);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
    return 0;
}
