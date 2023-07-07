#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to unsigned int
 * @b:The string having the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val;
unsigned int g;

for (dec_val = 0, g = 0; b[g] != '\0'; g++)
{
	if (b[g] == '1')
		dec_val = (dec_val << 1) | 1;
	else if (b[g] == '0')
		dec_val <<= 1;
	else if (b[g] != '0' && b[g] != '1')
		return (0);
}

return (dec_val);
}
