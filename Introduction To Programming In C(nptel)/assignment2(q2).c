#include <stdio.h>

int main() {
  int curr = 0; /* current value being read */
  int prev = 0; /* previous value read */
  int num_distinct = 0; /* number of distinct values read */
  
  scanf("%d", & curr);
  num_distinct = 1;
  
  while (curr != -1) {
    prev = curr;
    scanf("%d", & curr);
    if (prev != curr && curr != -1) {
      num_distinct = num_distinct + 1;
    }
  }
  printf("%d", num_distinct);
  return 0;
}
