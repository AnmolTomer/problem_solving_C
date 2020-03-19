#include <stdio.h>
#define PI 3.14
main()
{
    int radius;
    scanf("%d", &radius);
    float area = PI * radius * radius;
    printf("Area of the circle = %.2f\n", area);
}