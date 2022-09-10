#include <stdio.h>
/**
*main - i wan write d whole alphabet for small letters except q and e
*Return: Always 0 (success)
*/
int main(void)
{
char Alpha = 'a';
while (Alpha <= 'z')
{
if (Alpha != 'e' && Alpha != 'q')
{
putchar(Alpha);
}
Alpha++;
}
putchar('\n');
return (0);
}
