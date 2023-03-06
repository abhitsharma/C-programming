#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);
    int max_run = 1;
    int curr_run = 1;
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i-1]) {
            curr_run++;
        } else {
            if (curr_run > max_run) {
                max_run = curr_run;
            }
            curr_run = 1;
        }
    }
    if (curr_run > max_run) {
        max_run = curr_run;
    }
    printf("%d", max_run);
    return 0;
}
