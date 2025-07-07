#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to result or 0 if result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, k, len1 = 0, len2 = 0;
int carry = 0, sum;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

k = size_r - 1;
r[k--] = '\0';
len1--;
len2--;

while (len1 >= 0 || len2 >= 0 || carry)
{
if (k < 0)
return (0);

sum = carry;
if (len1 >= 0)
sum += n1[len1--] - '0';
if (len2 >= 0)
sum += n2[len2--] - '0';

r[k--] = (sum % 10) + '0';
carry = sum / 10;
}

k++;
i = 0;
while (r[k] != '\0')
{
r[i++] = r[k++];
}
r[i] = '\0';

return (r);
}
