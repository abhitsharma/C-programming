#include <stdio.h>
int main()
{
    int arr[50], size, i;
    int m1, m2;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    m1 = m2 = arr[50];
    for(i=0; i<size; i++)
    {
        if(arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
        }
        else if(arr[i] > m2 && arr[i] < m1)
        {
            
            m2 = arr[i];
        }
    }

    printf("First largest = %d\n", m1);
    printf("Second largest = %d", m2);
    return 0;
}

