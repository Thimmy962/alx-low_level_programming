#include "main.h"

/**
 * jack_bauer - check the code
 *
 * desription: prints all the minutes in 24 hours
 *
 * return: void
 *
 */

void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}

}
