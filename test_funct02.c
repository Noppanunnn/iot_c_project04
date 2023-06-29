#include <stdio.h>

#define line printf("----------------------------------\n");

void calSquareArea( ){
    double widths, longs;
    double areaSquare;

    printf("Pic Square.1\n");
    printf("Input width : "); scanf("%lf" , &widths);
    printf("Input long : "); scanf("%lf" , longs);
    areaSquare = widths * longs;
    printf("Area square is : %.2lf\n", areaSquare);
    line
}

void areaTriangle( ){
    double bases, highs;
    double areaTriangle;

    printf("Pic Square.1\n");
    printf("Input bases : "); scanf("%lf" , &bases);
    printf("Input highs : "); scanf("%lf" , &highs);
    areaTriangle = bases * highs / 2;
    printf("Area triangle is : %.2lf\n", areaTriangle);
    line
}
void main( ){
    int i;
    line
    printf("    SHAPE AREA\n");
    line

    for(i=1; i<=8; i++){
        calSquareArea();
    }
    calSquareArea();
    calSquareArea();

   
}