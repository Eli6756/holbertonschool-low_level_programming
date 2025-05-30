#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Description: Prints the name, age, and owner of the dog.
 * If any field is NULL, it prints (nil) instead.
 * If the struct itself is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
