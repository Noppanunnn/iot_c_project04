#include <stdio.h>

#define line printf("------------------------\n");

void main(){
    double widths, longs, bases, highs;
    double areaSquare, areaTriangle;

    line
    printf("    SHAPE AREA\n");
    line
    printf("Pic Square.1");
    printf("Input width : "); scanf("%lf" , &widths);
    printf("Input long : "); scanf("%lf" , longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line
    printf("Pic Square.2");
    printf("Input width : "); scanf("%lf" , &widths);
    printf("Input long : "); scanf("%lf" , longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line
    printf("Pic Square.3");
    printf("Input width : "); scanf("%lf" , &widths);
    printf("Input long : "); scanf("%lf" , longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    
    
}