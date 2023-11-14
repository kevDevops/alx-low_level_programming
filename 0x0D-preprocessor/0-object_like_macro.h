#ifndef _0_OBJECT_LIKE_MACRO_H_
#define _0_OBJECT_LIKE_MACRO_H_


#define SIZE 1024


#endif


=== 1 - pi.h===


#ifndef _PI_H_
#define _PI_H_


#define PI 3.14159265359


#endif


===2-main.c===


#include <stdio.h>
/**
*main - prints the name of the file
*
*Return: always 0
*/


int main(void)
{
   printf("%s\n", __FILE__);
   return (0);
}
