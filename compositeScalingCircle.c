// Composite Scaling of a Circle
#include<stdio.h>
#include<graphics.h>
int main(){
    int gdriver=DETECT, gmode, x, y, radius;
    // scaling factor
    double sf1, sf2;
    
    printf("Enter the x, y coordinate of the circle: ");
    scanf("%d%d", &x,&y);
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius); 
    printf("First Scaling Factor: ");
    scanf("%lf", &sf1);
    printf("Second Scaling Factor: ");
    scanf("%lf", &sf2);

    initgraph(&gdriver, &gmode, "");
    setbkcolor(WHITE);

    setcolor(BLUE);
    circle(x, y, radius);

    // first Scaling
    radius = sf1*radius;
    setcolor(DARKGRAY);
    circle(x, y, radius);

    //second Scaling
    radius = sf2*radius;
    setcolor(GREEN);
    circle(x, y, radius);

    getch();
    closegraph();
    return 0;
}
