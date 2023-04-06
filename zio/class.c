#include<stdio.h>

int main(){
  int p,q;
  int *a = &p, *b=&q;
  scanf("%d%d", a, b);
  int result = (*b) * (*a);
  printf("%d", result);
}