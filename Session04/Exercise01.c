#include<stdio.h>
      int main() {
          int a;
          printf("Hay nhap mot so bat ky de kiem tra: ");
          scanf("%d",&a);
          if(a > 0) {
              printf("So %d la so nguyen duong" , a);
          }else {
              printf ("So %d la nguyen am ", a);
          }

          return 0;
      }