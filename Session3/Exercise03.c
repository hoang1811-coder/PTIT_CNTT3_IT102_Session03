#include <stdio.h>
#define PI 3.14159265
int main() {
    float circleradius;
    printf("nhap ban kinh hinh tron:\n");
    scanf("%f",&circleradius);
    float perimeter = 2*PI*circleradius;
    float acreage =PI*(circleradius*circleradius);
    printf("chu vi hinh tron: %.2f\n",perimeter);
    printf("dien tich hinh tron: %.2f",acreage);
    return 0;
}
