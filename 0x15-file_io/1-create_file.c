#include "main.h"
/**
 *create_file - this code shall create file
 *@filename: this shall repreent location of file
 *@text_content: this shall represent cont of file
 *Return: it shall retun -1 if fail or 1 in succ
 */
int create_file(const char *filename, char *text_content)
{
int x;
int y;
ssize_t z = 0;
x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
switch (x > -1 && filename)
{
case 1:
for (y = 0; text_content && text_content[y]; y++)
{
}
switch (y > 0)
{
case 1:
z = write(x, text_content, y);
break;
}
close(x);
switch (z > -1)
{
case 1:
return (1);
break;
}
break;
}
return (-1);
}
