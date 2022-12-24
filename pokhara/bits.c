#include <stdio.h>
#include <sys/types.h>

int main() {
  u_int32_t number;
  scanf("%d", &number);
  u_int32_t shifted = ~number;
  printf("Binary Equivalent: ");
  for (int i = 32; i > 0; i--) {
    printf("%d", (number >> i) & 1);
  }
  printf("\n");
  printf("Negated Bits: ");
  for (int i = 32; i > 0; i--) {
    printf("%d", (shifted >> i) & 1);
  }
  printf("\nDecimal equivalent: %u\n", shifted);
  return 0;
}