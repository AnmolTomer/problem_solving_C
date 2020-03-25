#include <stdio.h>
#include <string.h>

void reverse(char[], int, int);
int main()
{
    char str1[20];
    scanf("%s", str1); //The string is taken as input form the test data.

    /* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
    int size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}

void reverse(char str1[], int start_index, int size)
{

    
        char temp = str1[start_index];
        str1[start_index] = str1[size - start_index];
        str1[size - start_index] = temp;
        if(start_index == size/2)
        {
        	return;
		}
		reverse(str1,start_index+1,size);
}
