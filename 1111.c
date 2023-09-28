#include <stdio.h>
#include <math.h>

int main (void){
    int x1, y1, x2, y2, x3, y3;
    float storona1, storona2, storona3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    storona1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    storona2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    storona3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    printf("%lf\n", (double)(storona1 + storona2 + storona3));
    return 0;
}