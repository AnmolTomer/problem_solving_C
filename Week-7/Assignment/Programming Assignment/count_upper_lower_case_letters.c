/*
Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The string may be a word or a sentence. 
Sample Test Cases
Input	Output

Test Case 1	
Problem Solving through Programming in C.
Uppercase Letters : 4
Lowercase Letters : 31

Test Case 2	
AICTE Approved FDP Course
Uppercase Letters : 10
Lowercase Letters : 12

Test Case 3	
Online NPTEL Course.
Uppercase Letters : 7
Lowercase Letters : 10

Test Case 4	
National Programme on Technology Enhanced Learning is a joint initiative of the IITs and IISc.
Uppercase Letters : 11
Lowercase Letters : 68


*/

#include <stdio.h>
int main()
{
    char input[200];
    int upper = 0, lower = 0;
    scanf("%[^\n]s", input); // A word or sentence is accepted from user
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
            upper++;
        if (input[i] >= 'a' && input[i] <= 'z')
            lower++;
        i++;
    }

    printf("Uppercase Letters: %d\n", upper);
    printf("Lowercase Letters: %d\n", lower);

    return (0);
}
