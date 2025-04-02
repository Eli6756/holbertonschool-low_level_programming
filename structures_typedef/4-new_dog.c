#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - returns the length of a string
 * @s: the string
 * Return: length of string
 */
int _str_len(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * _str_copy - copies a string to newly allocated memory
 * @src: source string
 * Return: pointer to newly allocated copy of src, or NULL
 */
char *_str_copy(char *src)
{
int i, len;
char *copy;

len = _str_len(src);
copy = malloc(len + 1);
if (copy == NULL)
return (NULL);

for (i = 0; i < len; i++)
copy[i] = src[i];

copy[i] = '\0';
return (copy);
}

/**
 * new_dog - creates a new dog with copies of name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: pointer to new dog_t struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

name_copy = _str_copy(name);
if (name_copy == NULL)
{
free(d);
return (NULL);
}

owner_copy = _str_copy(owner);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}

d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
