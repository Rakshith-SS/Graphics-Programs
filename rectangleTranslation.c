#include<stdio.h>
#include<graphics.h>

int main(){
    int gdriver=DETECT, gmode, left, right, top, bottom, t1, t2;
    
    printf("Enter the top corner: \n");
    scanf("%d%d", &left, &top);
    printf("Enter the bottom corner: \n");
    scanf("%d%d", &right, &bottom);
    printf("Left and Right Translation Factor:\n");
    scanf("%d",&t1);
    printf("Top and Bottom Translation Factor:\n");
    scanf("%d",&t2);

    initgraph(&gdriver, &gmode, "");
    
    setbkcolor(15); // white background
    setcolor(2);
    rectangle(left, top, right, bottom);
    
    setcolor(3);
    left = left + t1;
    right = right +t1;
    top = top + t2;
    bottom = bottom + t2;
    rectangle(left, top, right, bottom);
    
    getch();
    closegraph();
    return 0;
}
