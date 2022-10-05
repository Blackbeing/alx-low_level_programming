
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
	int coins[5] = { 25, 10, 5, 2, 1 };
	int count, coin = 0;
	int cash = atoi(argv[1]);
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cash < 0)
		printf("%d\n", 0);
	else
	{
		for (coin = 0; coins[coin]; coin++)
		{
			num = 0;
			if (cash <= 0)
				break;
			num = num_coins(cash, coins[coin]);
			count += num;
			cash -= (num * coins[coin]);

		}
		printf("%d\n", count);
	}

	return (0);
}
