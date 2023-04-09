#include<stdio.h>
#define pi 3.1416
int main()
{
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("\nArea of the circle = %f", area);
    printf("\nCircumference of the circle = %f", circumference);
    return 0;
}
