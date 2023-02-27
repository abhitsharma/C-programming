#include<stdio.h>

int main() {
  int largest = 0, second = 0;
  int n = 0;
  
  while(1) {
    scanf("%d", & n);
    if (n == -1) {
      printf("%d", second);
      break;
    }
    if (n > largest) {
      second = largest;
      largest = n;
    }else if (n > second && n != largest) {
      second = n;
    }
  }
  return 0;
}
