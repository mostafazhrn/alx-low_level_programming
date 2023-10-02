#include "main.h"
/**
 *append_text_to_file - this code shall append txt
 *@filename: this shall represent the loc of file
 *@text_content: this shall represent cont of file
 *Return: it shall return 1 in succ or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int x = open(filename, O_WRONLY | O_APPEND);
int y;
ssize_t z = 0;
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
