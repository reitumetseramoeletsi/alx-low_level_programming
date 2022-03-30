#include "main.c"
/**
 * sqtRecursive - computes square root recursively
 * @n: given number
 * @m: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}


/**
 * is_prime_number - determines wether a number is prime or not
 * @n: given number
 *
 * Return: squareroot if is prime and -1 if is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
