#include "main.h"
/**
 *read_textfile - this code shall read file and print stout
 *@filename: this shall represent the location
 *@letters: this shall represent the num of chars
 *Return: it shall return num of char or null if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int x = open(filename, O_RDONLY);
ssize_t y = 0;
ssize_t z = -1;
char *b = NULL;
switch (x > -1 && filename)
{
case 1:
b = malloc(sizeof(char) * (letters + 1));
if (b)
{
y = read(x, b, letters);
b[y] = '\0';
switch (y > -1)
{
case 1:
{
z = write(STDOUT_FILENO, b, y);
break;
}
}
free(b);
close(x);
switch (z > -1)
{
case 1:
{
return (y);
break;
}
}
break;
}
break;
}
return (0);
}
