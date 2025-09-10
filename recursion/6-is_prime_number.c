#include "main.h"

/**
 * check_prime - helper to check if n is divisible by any number <= i
 * @n: number to check
 * @i: divisor being tested
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n / 2));
}
