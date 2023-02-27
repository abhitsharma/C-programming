#include <stdio.h>
int main()
{
    int a[50], pos, c, n, v;
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (c = 0; c < n; c++)    
        scanf("%d", &a[c]);
    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &pos);    
    printf("Please enter the value\n");
    scanf("%d", &v);
    for (c = n - 1; c >= pos - 1; c--)    
        a[c+1] = a[c];
    a[pos-1] = v;
    
    printf("array is\n");
    for (c = 0; c <= n; c++)    
        printf("%d\n", a[c]);    
    
    return 0;
}

