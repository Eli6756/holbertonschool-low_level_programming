#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array of characters representing the board
 */
void print_chessboard(char (*a)[8])
{
int row, col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
_putchar(a[row][col]);
}
_putchar('\n');
}
}
