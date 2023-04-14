#include <stdio.h>
main() 
{

  int x, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &x);

  while (x != 0)
  {
    remainder = x % 10;
    reverse = reverse * 10 + remainder;
    x /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
