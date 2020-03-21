#include <stdio.h>
void main()
{
    int n, index;    // Variables for size of array and index to be deleted from array
    scanf("%d", &n); // Take the size from user
    int arr[n];      // init array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &index);                // take the index to be deleted from user
    int temp = index;                   // store value of index to delete in temp
    for (int i = index - 1; i < n; i++) // Loop to put in element at index n in place of element at index n-1 (basically deleting) and writing data at next index in its place
    {                                   // Start deleting from index-1 because all the elements from 0 to index-2 will remain same in the array no need to change those by starting loop from 0
        arr[temp - 1] = arr[temp];
        temp++;
    }

    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
}

// Solution provided by instructor

/*
#include <stdio.h>
int main()
{
    int array[30], num, i, pos;
    //num is number of elements in the array and loc is the position of the array to be deleted.
    // starting from arr[0] as the first(1) position and so on.

    scanf("%d", &num); //Accepts the size of array from test case data

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); // Read the array elements from the test case data
    }

    scanf("%d", &pos); // Accepts the Position of the element to be deleted

    // loop for the deletion
    while (pos < num)
    {
        array[pos - 1] = array[pos];
        pos++;
    }
    num--; // No of elements reduced by 1 as 1 element is deleted

    for (i = 0; i < num; i++)
        printf("%d\n", array[i]);

    return (0);
}
*/