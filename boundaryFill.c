// boundary Fill
#include<stdio.h>
#include<graphics.h>

void floodFill(int x, int y, int boundaryColor, int fillColor){

    if( (getpixel(x, y)!= boundaryColor) && (getpixel(x ,y) != fillColor)){
        putpixel(x, y, fillColor);
        floodFill(x+1, y, boundaryColor, fillColor);
        floodFill(x, y+1, boundaryColor, fillColor);
        floodFill(x-1, y, boundaryColor, fillColor);
        floodFill(x, y-1, boundaryColor, fillColor);
    }
}

int main(){
    int gdriver=DETECT, gmode, left, top, bottom, right;
    
    printf("Enter the left-top Coordinate:\n");
    scanf("%d%d", &left, &top);
    printf("Enter the right-bottom Coordinate:\n");
    scanf("%d%d", &right, &bottom);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);
    setcolor(BLUE);
    rectangle(left, top, right, bottom); 
    floodFill(left+1, top+1, BLUE, GREEN);
    getch();
    closegraph();
    return 0;
}
