#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
