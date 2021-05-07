// Flood Fill
#include<stdio.h>
#include<graphics.h>


void floodFill(int x, int y, int oldcolor, int newcolor){

    if(getpixel(x, y) == oldcolor){
        putpixel(x, y, newcolor);
        floodFill(x+1, y, oldcolor, newcolor);
        floodFill(x, y+1, oldcolor, newcolor);
        floodFill(x-1, y, oldcolor, newcolor);
        floodFill(x, y-1, oldcolor, newcolor);
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
    floodFill(left+1, top+1, WHITE, GREEN);
    getch();
    closegraph();
    return 0;
}
