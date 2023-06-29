#include <stdio.h>

void showWelcome(char n[20]){
    printf("Hi....%s\n",n);
    return;
}

void sumNumber(int x, int y){
    printf("%d + %d = %d",x,y, x + y);
    showWelcome("somsri");
}

void main(){
    sumNumber(10, 20);
    showWelcome("Sombat");
    

}