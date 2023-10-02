#include "main.h"
/**
 *sort - this code shall do the exit
 *@x: this shall represent the exit
 *@y: this shall represent the cp args
 *@z: this shall represent the descri
 *Return: it shall return the exit
 */
void sort(int x, char **y, int z)
{
if (x == 100)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", z);
}
else if (x == 99)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", y[2]);
}
else if (x == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", y[1]);
}
else if (x == 97)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
exit(x);
}
/**
 *main - this func copy
 *@a: this shall represent the args
 *@y: this shall represent the val args
 *Return: it shall return 1 or exit in fail
 */
int main(int a, char **y)
{
char b[1024];
int fz = 0;
int tz = 0;
ssize_t bit = 0;
ssize_t ecr = 0;
switch (a != 3)
{
case 1:
sort(97, y, 0);
break;
}
fz = open(y[1], O_RDONLY);
switch (fz > -1 && y[1])
{
case 1:
tz = open(y[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
switch (tz > -1 && y[2])
{
case 1:
while ((bit = read(fz, b, 1024)) != 0)
{
switch (bit == -1)
{
 case 1:
 sort(98, y, 0);
 break;
 }
ecr = write(tz, b, bit);
switch (ecr == -1 || ecr != bit)
{
case 1:
sort(99, y, 0);
break;
}
}
switch (close(tz) == -1)
{
case 1:
sort(100, y, tz);
break;
}
switch (close(fz) == -1)
{
case 1:
sort(100, y, fz);
break;
}
return (0);
break;
}
sort(99, y, 0);
break;
}
sort(98, y, 0);
return (0);
}
