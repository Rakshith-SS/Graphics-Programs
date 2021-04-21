#include<stdio.h>
#include<math.h>
#include<graphics.h>

void dda_line(int x1, int y1, int x2, int y2){
    int dx, dy, steps;
    float x, y, xinc, yinc;

    // find dx and dy
    dx = x2 - x1;
    dy = y2 - y1;
    // find steps
    if(dx > dy){
        steps = dx;
    }
    else{
        steps = dy;
    }

    // plot the start points
    x = x1;
    y = y1;
    putpixel(x, y, 3);

    // find x-increment  and y-increment
    xinc = dx/(float)steps;
    yinc = dx/(float)steps;
    

    // plot the points
    for(int i = 0; i <= steps; i++){
        x = x + xinc;
        y = y + yinc;
        putpixel(roundf(x), roundf(y), 3);
    }
}

int main(){
    int gdriver=DETECT, gmode, x1, x2, y1, y2;
    printf("Enter the start points: \n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the end points: \n");
    scanf("%d%d", &x2, &y2);

    initgraph(&gdriver, &gmode, "");
    dda_line(x1,y1,x2,y2);
    delay(3000);
    getch();
    closegraph();
}
