#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int sum = 0;
int rand_char;
char c;

srand(time(NULL));

while (sum < 2772)
{
rand_char = rand() % 94 + 33;
if (sum + rand_char > 2772)
break;
putchar(rand_char);
sum += rand_char;
}

c = 2772 - sum;
putchar(c);
sum += c;

printf("\n[Total sum = %d]\n", sum); // should be 2772

return (0);
}
