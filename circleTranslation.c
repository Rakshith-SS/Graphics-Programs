#include<stdio.h>
#include<graphics.h>

int main(){
    int gdriver=DETECT, gmode, x, y , tx, ty ,radius;
    printf("Enter the x and y coordinate:\n");
    scanf("%d%d", &x, &y);
    printf("Enter the radius of the circle:\n");
    scanf("%d", &radius);
    printf("X-scaling Factor\n");
    scanf("%d", &tx);
    printf("Y-Scaling Factor\n");
    scanf("%d", &ty);

    initgraph(&gdriver, &gmode, "");

    setbkcolor(15); 
    setcolor(3);
    circle(x, y, radius);
   
    setcolor(2); 
    x = x + tx;
    y = y + ty;
    circle(x, y, radius);

    getch();
    closegraph();
    return 0;
}
