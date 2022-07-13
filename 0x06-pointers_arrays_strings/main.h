#include "main.h"
#include <stdio.h>

/**
 * main - check the code for ALX school student 
 *
 * Return: 0
 */

int main(void)
{
char s1[98];
char s2[];
char *prt;
printf("%s\n", s1);
printf("%s", s2);
prt = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", prt);
return 0;
}
