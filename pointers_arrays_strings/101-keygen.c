#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random valid password for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
char pass[100];
int sum = 0, i = 0;

srand((unsigned int)time(NULL));

/* build a random printable string until sum >= 2772 */
while (sum < 2772)
{
pass[i] = 33 + (rand() % 94); /* printable ASCII 33..126 */
sum += (int)pass[i];
i++;
}
pass[i] = '\0';

/* reduce characters (never below 33) until sum == 2772 */
while (sum > 2772)
{
for (i = 0; pass[i] && sum > 2772; i++)
{
if (pass[i] > 33)
{
pass[i]--;
sum--;
}
}
}

printf("%s", pass);
return (0);
}
