// sample
/*rev ke phle or rev ke bad array print krna hai 
print reverse array

target=7,6,5,4,3,2,1--print
arr[7]=     1, 2, 3, 4, 5, 6, 7
step 1 :    7, 2, 3, 4, 5, 6, 1
step 2 :    7, 6, 3, 4, 5, 2, 1
step 3 :    7, 6, 5, 4, 3, 2, 1   
*/

/*........................................completed............................................*/

#include <stdio.h>
void arrayRev(int arr[])
{
    for (int i = 0; i < 7/2; i++)//if i<7 then print as it is after reversing and if i<7/2 then print reversing
    {
        int temp;
        // swap item  arr[i] with arr(6-i)
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

// void arrayPrint(int arr[])
// {
//  for (int i = 0; i < 7; i++)
//     {
//         printf("the value of element %d is %d\n", i, arr[i]);
//     }
// }
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    /*.....before reverse.......*/
    printf("Before Reversing An Array : \n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value of element %d is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    /*......after reverse.......*/
    printf("After Reversing An Array : \n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value of element %d is %d\n", i, arr[i]);
    }

    return 0;
}