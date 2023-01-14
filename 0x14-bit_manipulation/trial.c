#include <string.h>
#include <stdio.h>
unsigned int binary_to_uint( const char *b)
{
 unsigned int k = 1;
 unsigned int i=0;
 int c;
 unsigned int len;

 len = strlen(b);

  for (c = len-1; c >= 0; c--)
 {
  if (b[c] != '0' && b[c] != '1')
      return (0);
    if (b[c] == '1')
    {
     i += k;
     }
    k *= 2;
}
 return (i);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    (n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}

/**
 * alternative to the first function.
 *
unsigned int binary_to_uint(const char *b)
{
  unsigned int val = 0; # this variable holds the result after conversion
  int i = 0; # used for iteration through the various array of digits contained in 'b'.

  if (b == NULL) 
  	return (0);
  else
  if (b[i] !== '0' && b[i] !== '1') 

    return 0;

  while (b[i] == '0' || b[i] == '1')
  {  // Found another digit.
    val <<= 1;
    val += b[i]-'0';
    i++;
  }
  return val;
}
*/
