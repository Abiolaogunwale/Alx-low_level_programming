#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to unsigned int
 * @b:The string having the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val = 0;
unsigned int g;

	if (!b)
		return (0);

	for (g = 0; b[g]; g++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[g] - '0');
	}

	return (dec_val);
}
