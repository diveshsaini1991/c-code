#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a, b, i, j, t;
    a = sizeof(ar) / sizeof(ar[0]);
    b = sizeof(arr) / sizeof(arr[0]);
    int arrr[a + b];
    for (i = 0; i < a; i++)
    {
        arrr[i] = ar[i];
    }
    for (j = 0; j < b; j++)
    {
        arrr[i + j] = arr[j];
    }
    for (int q = 0; q < a + b; q++)
    {
        for (int w = q + 1; w < a + b; w++)
        {
            if (arrr[q] < arrr[w])
            {
                t = arrr[q];
                arrr[q] = arrr[w];
                arrr[w] = t;
            }
        }
    }

    for (int k = 0; k < a + b; k++)
    {
        printf("%d ", arrr[k]);
    }
}
