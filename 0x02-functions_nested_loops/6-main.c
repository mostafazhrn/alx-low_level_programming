#include "main.h"
#include <stdio.h>
/**
 *main - verify the code
 *Return: it shall return 0 in sucess
 */
int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
