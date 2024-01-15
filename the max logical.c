#include <stdio.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  int max_and = 0, max_or = 0, max_xor = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {  // Start j from i+1 to avoid duplicates
      int current_and = i & j;
      int current_or = i | j;
      int current_xor = i ^ j;

      if (current_and < k) {
        max_and = fmax(max_and, current_and);
      }
      if (current_or < k) {
        max_or = fmax(max_or, current_or);
      }
      if (current_xor < k) {
        max_xor = fmax(max_xor, current_xor);
      }
    }
  }

  printf("Maximum AND: %d\n", max_and);
  printf("Maximum OR: %d\n", max_or);
  printf("Maximum XOR: %d\n", max_xor);
}


int main() {
    int n,int k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
