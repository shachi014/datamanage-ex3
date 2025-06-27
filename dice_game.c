#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL)); /*乱数の初期化*/
    
    int x=0;
    int y=0;
    int total=0;
    printf("Rolling dice...\n");
    x = (rand()%6)+1;
    y = (rand()%6)+1;
    printf("Dice 1: %d\n",x);
    printf("Dice 2: %d\n",y);
    total = x+y;
    printf("Total value: %d\n",total);
}
