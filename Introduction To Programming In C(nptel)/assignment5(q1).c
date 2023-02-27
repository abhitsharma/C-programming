#include <stdio.h>

void reverse_string() {
    char c;
    if ((c = getchar()) != EOF) {
        reverse_string();
        putchar(c);
    }
}

int main() {
   
    reverse_string();
  
    return 0;
}

