#include <stdio.h>

int is_palindrome(int n)
{
	int reverse = 0, original = n;

	while (n != 0)
	{
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	return (reverse == original);
}

void save_result_to_file(int result)
{
	FILE *fp;
	fp = fopen("102-result", "w");

	if (fp != NULL)
	{
		fprintf(fp, "%d", result);
		fclose(fp);
	}
}


int main()
{
	int largest_palindrome = 0, i, j, product;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
	save_result_to_file(largest_palindrome);
	return (0);
}
