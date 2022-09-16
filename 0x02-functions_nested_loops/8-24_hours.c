#include "main.h"

/**
 * jack_bauer -- Print every minute of ever hour
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int hour, min = 0;
	int hour_max = 24;
	int min_max = 60;

	for (hour = 0; hour < hour_max; hour++)
	{
		for (min = 0; min < min_max; min++)
		{
			char Htens = hour / 10;
			char Hones = hour % 10; /*remaider: */
			char Mtens = min / 10;
			char Mones = min % 10;


			_putchar(Htens + '0');
			_putchar(Hones + '0');

			 _putchar(':'); /* 10:00 */

			_putchar(Mtens + '0');
			_putchar(Mones + '0');

			 _putchar('\n');

		}
	}


}
