#include <stdlib.h>
#include <stdio.h>
/**
 * num_coins - Find number of coins
 * @value: cash value
 * @coin_value: value of coin
 *
 * Return: num of coins in cash value
 */

int num_coins(int value, int coin_value)
{
	int num_coins = 0;

	if (value <= 0)
		return (0);

	num_coins = value / coin_value;
	return (num_coins);

}

/**
 * main -  prints minimum number of coins to make change
 * @argc: num of arguments
 * @argv: command line arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;

		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}
