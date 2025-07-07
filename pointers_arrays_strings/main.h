#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _atoi(char *s);
void reverse_array(int *a, int n);
void print_array(int *a, int n);
void puts_half(char *str);
void print_rev(char *s);
void _puts(char *str);
void rev_string(char *s);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void puts2(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *str);
char *rot13(char *str);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);

#endif /* MAIN_H */
