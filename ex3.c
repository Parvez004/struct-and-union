#include <stdio.h>

struct rectangle {
   float length;
   float width;
};

int main() {
   struct rectangle r;
   printf("Enter length: ");
   scanf("%f", &r.length);
   printf("Enter width: ");
   scanf("%f", &r.width);

   float area = r.length * r.width;
   printf("Area of rectangle: %.2f\n", area);

   return 0;
}
