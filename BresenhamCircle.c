#include<stdio.h>
#include<graphics.h>
void BresenhamCircle(int xc, int yc, int radius){
    int x, y, d;

    x = 0;
    y = radius; 
    d = 3 - 2*radius;

    for(x = 0; x<=y; x++){
        if(d<0)
            d = d + 4*x + 6;
        else{
            d = d + 4*(x-y) + 10;
            y = y - 1;
        }
        
        putpixel(y+xc, x+yc, 6);
        putpixel(x+xc, y+yc, 6);
        putpixel(-x+xc, y+yc, 6);
        putpixel(-y+xc, x+yc, 6);
        putpixel(-y+xc, -x+yc, 6);
        putpixel(-x+xc, -y+yc, 6);
        putpixel(x+xc, -y+yc, 6);
        putpixel(y+xc, -x+yc, 6);
    }
}

int main(){
    int gdriver=DETECT, gmode, radius, xc, yc;
    printf("Enter the Radius of the circle: ");
    scanf("%d",&radius);
    printf("Enter the centres of the circle: ");
    scanf("%d%d", &xc, &yc);

    initgraph(&gdriver, &gmode,"");
    BresenhamCircle(xc, yc, radius);
    getch();
    closegraph();
}
