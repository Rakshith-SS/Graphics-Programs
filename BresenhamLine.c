#include<stdio.h>
#include<graphics.h>
void BresenhamLine(int x1, int x2, int y1, int y2){
    // p is the decision parameter
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2*dy - dx;
    y = y1;

    for(x=x1;x<x2; x++){
        if(p<0){
            p = p + 2*dy;
            putpixel(x,y,4);
        }
        else{
            y++;
            p = p + 2*(dy-dx);
            putpixel(x,y,4);
        }
   } 
}

int main(){
    int  gdriver=DETECT, gmode, x1, x2, y1, y2;
    printf("Bresenham's Line Drawing Algorithm");
    printf("\nEnter the start points: ");
    scanf("%d %d", &x1,&y1);
    printf("\nEnter the end points: ");
    scanf("%d %d",&x2, &y2); 
    initgraph(&gdriver, &gmode, "");
    BresenhamLine(x1, y1, x2, y2);
    delay(3000);
    getch();
    closegraph();
    return 0;
}
