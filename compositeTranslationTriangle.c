// composite Translation of a Triangle 
#include<stdio.h>
#include<graphics.h>

int main(){
    int gdriver=DETECT, gmode, x1, x2, x3, y1, y2, y3, tx1, ty1, tx2, ty2;

    printf("Enter the Coordinate of Vertex A:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the Coordinate of Vertex B:\n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the Coordinate of Vertex C:\n");
    scanf("%d%d", &x3, &y3);

    printf("First X-Translation Factor: ");
    scanf("%d", &tx1);
    printf("First Y-Translation Factor: ");
    scanf("%d", &ty1);
    printf("Second X-Translation Factor: ");
    scanf("%d", &tx2);
    printf("Second Y-Translation Factor: ");
    scanf("%d", &ty2);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);
    
    setcolor(BLUE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // first Translation
    setcolor(DARKGRAY);
    x1 = x1 + tx1;
    x2 = x2 + tx1;
    x3 = x3 + tx1;

    y1 = y1 + ty1;
    y2 = y2 + ty1;
    y3 = y3 + ty1;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // second Translation
    setcolor(GREEN);
    x1 = x1 + tx2;
    x2 = x2 + tx2;
    x3 = x3 + tx2;

    y1 = y1 + ty2;
    y2 = y2 + ty2;
    y3 = y3 + ty2;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();

    return 0;
}
