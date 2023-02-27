#include<stdio.h>

int find_odd(int k)
{
    int num, count=0;
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        if (num % 2 != 0)
        {
            count++;
            if (count == k)
            {
                return num;
            }
        }
    }
    return -1;
}

int main()
{
    int k;
    scanf("%d", &k);
    int result = find_odd(k);
    printf("%d", result);
    return 0;
}
