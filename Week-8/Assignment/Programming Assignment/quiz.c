// Q3 : Ans: c)    Error: Two return statements cannot be used in any function
// Code:
/*
#include <stdio.h>

int f(int a)
{
    return a > 20 ? 10 : 20;
}

int main()
{
    int b;
    b = f(20);
    printf("%d\n", b);
    return (0);
}

*/

// Q4 : Ans: a)    Only once
// Code:

/*
#include <stdio.h>
int i;
int fun();
int main()
{
    while (i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return (0);
}
int fun()
{
    printf("Hi");
}
*/

// Q6 : Ans: c)    10 10 10 10 10; Reason: Inner i dies everytime its scope finishes.
// Code:

#include <stdio.h>
int main()
{
    int i;
    for (int i = 0; i < 5; i++)
    {
        int i = 10;
        printf("%d ", i);
        i++;
    }
    return (0);
}