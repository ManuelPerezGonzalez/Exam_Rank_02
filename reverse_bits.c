#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	c;

	c = c | ((octet & 128) >> 7);
	c = c | ((octet & 64) >> 5);
	c = c | ((octet & 32) >> 3);
	c = c | ((octet & 16) >> 1);
	c = c | ((octet & 8) << 1);;
	c = c | ((octet & 4) << 3);
	c = c | ((octet & 2) << 5);
	c = c | ((octet & 1) << 7);
	return (c);
}
