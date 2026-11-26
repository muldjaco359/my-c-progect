#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    int seed;
    int randnum;
    int size;
    printf("what seed do you wish to use\n");
    scanf("%d",seed);
    printf("how many times do you want to randimize the number\n");
    scanf("%d",randnum);
    while (randnum <= 0)
    {
        int tempseed = pow(seed,2);
        int len = snprint(NULL, 0, "%d", seed);
        size = (snprint(NULL, 0, "%d", tempseed) - len) /2;
        randnum --;
    }
    return 0;
}

