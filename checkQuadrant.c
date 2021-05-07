#include<stdio.h>
int main(){ 
    int x, y;
    printf("Enter the coordinates of x and y: \n");
    scanf("%d %d", &x, &y);
    if (x>0 && y>0)
        printf("The Point lies in the first quadrant");
    else if(x<0 && y>0)
        printf("The point lies in the second quadrant");
    else if(x<0 && y<0)
        printf("The point lies in the third quadrant");
    else{
        printf("The point lies in the fourth quadrant");
    }
    printf("\n");
    return 0;
}
