#include "main.h"
#include <stdio.h>
int main(void)
{
  int  b = _isdigit('1');
  if (b == 1)
    printf("1\n");
  else
    printf("0\n");
}
