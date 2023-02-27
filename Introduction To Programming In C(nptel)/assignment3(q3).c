#include <stdio.h>

int main()
{
    float current, previous = 0, average;
    int first = 1;

    while (1)
    {
        scanf("%f", &current);
        if (current == -1) break;

        if (first)
        {
            first = 0;
        }
        else
        {
            average = (previous + current) / 2;
            printf("%.1f ", average);
        }
        previous = current;
    }
    return 0;
}
