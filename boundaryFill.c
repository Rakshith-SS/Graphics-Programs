// boundary Fill
#include<stdio.h>
#include<graphics.h>

void boundaryFill(int x, int y, int boundaryColor, int fillColor){

    if( (getpixel(x, y) != boundaryColor) && (getpixel(x ,y) != fillColor)){
        putpixel(x, y, fillColor);
        boundaryFill(x+1, y, boundaryColor, fillColor);
        boundaryFill(x, y+1, boundaryColor, fillColor);
        boundaryFill(x-1, y, boundaryColor, fillColor);
        boundaryFill(x, y-1, boundaryColor, fillColor);
    }
}

int main(){
    int gdriver=DETECT, gmode, left, top, bottom, right;
    
    left = 200;
    top = 200;
    right = 300;
    bottom = 300;

    initgraph(&gdriver, &gmode, "");
    //setbkcolor(WHITE);
    setcolor(BLUE);
    rectangle(left, top, right, bottom); 
    boundaryFill(left+1, top+1, BLUE, GREEN);
    getch();
    closegraph();
    return 0;
}
