#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 * @x - refers to number of minutes in a day
 * @a - left digit of hour number in clock
 * @b - right digit of hour number in clock
 * @c - left digit of minute number in clock
 * @d - right digit of minute number in clock
 */
void jack_bauer(void)
{
	int x = 0;
	int a = 0, b = 0, c = 0, d = 0;

	while (x < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		x++;
	}
}
