#include <stdio.h>
#include "main.h"

/**
* main - the code prints the largest of 3 No
* Return: it shall return 0 in success
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
