#include<stdio.h>
#include<graphics.h>
#include<math.h>

void DDACircle(int radius){
    // finding epsilon according to the radius
    int  i, epsilonfinder;
    float x1, y1, x2, y2, x, y, epsilon;
    i = 0;
    epsilonfinder = pow(2,i); 
    
    while(epsilonfinder < radius){
        i++;
        epsilonfinder = pow(2,i);
    }

    epsilonfinder = pow(2,i-1);
    epsilon = 1/(float) epsilonfinder;
    
    x1 = radius*cos(0);
    y1 = radius*sin(0);
    x = x1;
    y = y1;

    //plotting on all four co-ordinates
    while(((y1 -y) < epsilon) || ((x1 -x) < epsilon)){
        x2 = x1 + y1*epsilon;
        y2 = y1 - x2*epsilon;
        putpixel(250+x2, 250+y2, 2);
        x1 = x2;
        y1 = y2;
    }
}

int main(){
    int gdriver=DETECT, gmode, radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    initgraph(&gdriver, &gmode, "");
    DDACircle(radius);
    getch();
    closegraph();
    return 0;
}
