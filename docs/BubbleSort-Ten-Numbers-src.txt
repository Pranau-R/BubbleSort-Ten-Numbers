#include <stdio.h>
int main()
{
    int arr[10], n=10, i, j, swap;                   //declaring integer
    /*printf("Enter Number of Elements:\n");         //Getting array size from user
    scanf("%d", &n); */                                
    printf("Now Enter 10 Random Intergers:\n", n);   //Getting n number of integer input from user
    for (i=0; i<n; ++i)                              //storing all inputs on their corresponding array index
    scanf("%d", &arr[i]);

    for (i=0; i<n-1; ++i)                            //Loop command for sorting the inputs
    {
        for (j=0; j<n-i-1; ++j)
        {
            if (arr[j]>arr[j+1])                     //comparing the value of arr[j] and arr[j+1], we can also use '<' operator in the place of '>' operator for soting in descending order.
            {
                swap = arr[j];                       //swaping the values if the condition is true a temporary variable 'swap'
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

printf("Sorted list in ascending order:\n");        //printing all our sorted numbers one by one
for (i=0; i<n; ++i)
printf("%d\n", arr[i]);
return 0;
}
