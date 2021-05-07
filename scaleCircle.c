#include<stdio.h>
#include<graphics.h>
int main(){
    int gdriver=DETECT, gmode, x, y, radius;
    //scaling factor
    float sf;
    printf("Enter the x and y co-ordinates:\n");
    scanf("%d%d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the scaling factor: ");
    scanf("%f", &sf);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);

    setcolor(BLUE);
    circle(x, y, radius);

    radius = sf*radius;
    setcolor(GREEN);
    circle(x, y, radius);
    getch();
    closegraph();
    return 0;
}
