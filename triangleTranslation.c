#include<stdio.h>
#include<graphics.h>
int main(){
    int gdriver=DETECT, gmode, x1, x2, x3, y1, y2, y3, tx, ty;
    printf("Enter the coordinates of vertex A: \n");
    scanf("%d%d", &x1,&y1);
    printf("Enter the coordinates of vertex B: \n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the coordinates of vertex C: \n");
    scanf("%d%d", &x3, &y3);
    printf("X-scaling Factor: \n");
    scanf("%d",&tx);
    printf("Y-Scaling Factor: \n");
    scanf("%d",&ty);
    
    initgraph(&gdriver, &gmode, "");
    setcolor(3);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    x1 = x1 + tx;
    x2 = x2 + tx;
    x3 = x3 + tx;

    y1 = y1 + ty;
    y2 = y2 + ty;
    y3 = y3 + ty;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    
    getch();
    closegraph();
    return 0;
}
