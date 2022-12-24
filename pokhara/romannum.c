#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int which(char x) {
  char lx = tolower(x);
  if (lx == 'i')
    return 1;
  else if (lx == 'v')
    return 5;
  else if (lx == 'x')
    return 10;
  else if (lx == 'l')
    return 50;
  else if (lx == 'c')
    return 100;
  else if (lx == 'd')
    return 500;
  else if (lx == 'm')
    return 1000;
  else {
    return 0;
  }
}

int main(int argc, char *argv[]) {
  char romans[10];
  int store = 0;

  scanf("%s", romans);

  int length = strlen(romans);
  // store += which(romans[0]);
  for (int i = 0; i < length; i++) {
    if ((which(romans[i])) < (which(romans[i + 1]))) {
      store += (which(romans[i + 1]) - which(romans[i]));
      i++;
    } else {
      store += (which(romans[i]));
    }
  }
  printf("\n%d\n", store);
}