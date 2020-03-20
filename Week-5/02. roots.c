#include <stdio.h>
#include <math.h>
int main()
{
    printf("\nEnter the coefficients a,b and c of quadratic equation of the form ax^2+bx+c : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float disc = (b * b - (4 * a * c));
    float root1, root2;
    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / 2 * a;
        root2 = (-b - sqrt(disc)) / 2 * a;
        printf("Roots are real and distinct.\n");
        printf("Roots of the equation %dx^2+%dx+%d are: %.2f and %.2f\n", a, b, c, root1, root2);
    }
    else if (disc == 0)
    {
        printf("Roots are equal.\n");
        root1 = (-b + sqrt(disc)) / 2 * a;
        root2 = root1;
        printf("Roots of the equation %dx^2+%dx+%d are: %.2f and %.2f\n", a, b, c, root1, root2);
    }
    else
    {
        printf("Roots are imaginary.");
    }

    return 0;
}