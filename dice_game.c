#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL)); /*乱数の初期化*/
    
    int x=0;
    int y=0;
    int total=0;
    char name;

    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s\n",name);
    printf("Rolling dice...\n");
    x = (rand()%6)+1;
    y = (rand()%6)+1;
    printf("Dice 1: %d\n",x);
    printf("Dice 2: %d\n",y);
    total = x+y;
    printf("Total value: %d\n",total);
}
