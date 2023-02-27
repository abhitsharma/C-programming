
#include <stdio.h>

int collatz(int n, int count) {
    if (n == 1) {
        return count;
    } else if (n % 2 == 0) {
        return collatz(n / 2, count + 1);
    } else {
        return collatz(3 * n + 1, count + 1);
    }
}

int main() {
    int n, count = 0;
    
    scanf("%d", &n);
    count = collatz(n, count);
    printf("%d",count);
    return 0;
}
