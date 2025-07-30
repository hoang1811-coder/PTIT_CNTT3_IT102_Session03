#include<stdio.h>
int main() {
    int a,b,c;
    int max;
    int min;
    int medium;
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b&&a>=c) {
        max=a;
    }else if (b>=a&&b>=c) {
        max=b;
    }else if (c>=a&&c>=b) {
        max=c;
    }
    if (b>=a&&c>=a) {
        max=a;
    }else if (a>=b&&c>=b) {
        min=b;
    }else if (c<=a&&b>=c) {
        min=c;
    }
    medium = a + b + c - max - min;
    printf("%d,%d,%d",min,medium,max);
    
    return 0;
}