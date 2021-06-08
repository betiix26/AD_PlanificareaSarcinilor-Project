#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i;
    for(i=0; i<7; i++) // i va merge pana la 7, iar programul va returna
                        // 7 valori random
        printf("%d\n", 1+rand()%100);
    return 0;
}
